#include "include/json.hpp"  // Use the local header file
#include <iostream>
#include <fstream>

using json = nlohmann::json;
using namespace std;

int main() {
    // Open JSON file
    ifstream file("person.json");
    if (!file) {
        cerr << "Error: Could not open JSON file!" << endl;
        return 1;
    }

    // Parse JSON file
    json person;
    file >> person;

    // Extract data
    string name = person["name"];
    int age = person["age"];
    string street = person["address"]["street"];
    string city = person["address"]["city"];
    string zip = person["address"]["zip"];

    // Print details
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << street << ", " << city << " - " << zip << endl;

    return 0;
}
