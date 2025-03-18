#include <iostream>
#include <fstream>
#include <unordered_map>
//#include "json.hpp"  // Include nlohmann/json library

#include "include/json.hpp"  
using json = nlohmann::json;
using namespace std;

// Function to load JSON into unordered_map
unordered_map<string, int> loadCommoditiesFromJSON(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error: Could not open JSON file!" << endl;
        exit(1);
    }

    json jsonData;
    file >> jsonData; // Read JSON file

    unordered_map<string, int> commodities;

    // Loop through JSON array and store in unordered_map
    for (const auto& item : jsonData["commodities"]) {
        commodities[item["name"]] = item["price"];
    }
    return commodities;
}

int main() {
    // Load commodity data into unordered_map
    unordered_map<string, int> commodityMap = loadCommoditiesFromJSON("data.json");

    // User input for commodity search
    string key;
    cout << "Enter the commodity to look for: ";
    cin >> key;

    // Search for commodity in unordered_map
    if (commodityMap.find(key) != commodityMap.end()) {
        cout << "Commodity found: " << key << " - Price: " << commodityMap[key] << endl;
    } else {
        cout << "Commodity not found!" << endl;
    }

    return 0;
}
