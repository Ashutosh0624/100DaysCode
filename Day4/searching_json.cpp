#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
//#include "json.hpp"  // Include nlohmann/json library

#include "include/json.hpp"  // Use the local header file

using json = nlohmann::json;
using namespace std;

// Function to perform binary search on sorted vector<pair<string, int>>
int searchCommodity(vector<pair<string, int>>& v1, string key) {
    int low = 0, high = v1.size() - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (v1[mid].first == key) return mid;
        if (v1[mid].first > key) high = mid - 1;
        else low = mid + 1;
    }
    return -1; // Not found
}

// Function to load JSON file and convert it to vector<pair<string, int>>
vector<pair<string, int>> loadCommoditiesFromJSON(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error: Could not open JSON file!" << endl;
        exit(1);
    }

    json jsonData;
    file >> jsonData;
    vector<pair<string, int>> commodities;

    for (const auto& item : jsonData["commodities"]) {
        commodities.push_back({item["name"], item["price"]});
    }
    return commodities;
}

int main() {
    // Load commodity data from JSON file
    vector<pair<string, int>> v1 = loadCommoditiesFromJSON("data.json");

    // Sort the vector before performing binary search
    sort(v1.begin(), v1.end());

    // Get user input
    string key;
    cout << "Enter the commodity to look for: ";
    cin >> key;

    // Perform binary search
    int res = searchCommodity(v1, key);
    if (res != -1) {
        cout << "Commodity found: " << v1[res].first << " - Price: " << v1[res].second << endl;
    } else {
        cout << "Commodity not found!" << endl;
    }

    return 0;
}
