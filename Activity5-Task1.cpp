#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Function to build a hash table (unordered_map) from an array
    unordered_map<int, bool> buildHashTable(const vector<int>& arr) {
    unordered_map<int, bool> hashTable;
    for (int value : arr) {
        hashTable[value] = true; // Store each value as a key
    }
    return hashTable;
}

// Function to search for an element using the hash table
bool searchEfficiently(const unordered_map<int, bool>& hashTable, int target) {
    // The 'count' method provides O(1) average-case lookup
    return hashTable.count(target) > 0;
}

int main() {
    vector<int> array = {200, 400, 100, 50, 350};
    
    // Build the hash table for O(1) searches
    unordered_map<int, bool> myHashTable = buildHashTable(array);

    int target = 100;
    
    // Perform the efficient search
    if (searchEfficiently(myHashTable, target)) {
        cout << "The value " << target << " was found." << endl;
    } else {
        cout << "The value " << target << " was not found." << endl;
    }

    return 0;
}