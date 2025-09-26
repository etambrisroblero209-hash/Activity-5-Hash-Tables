# Activity-5-Hash-Tables

Task 1: 
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

Task 2: 
#include <iostream>
#include <string>

using namespace std;

int main() {
    string myName = "John Doe";
   
    hash<string> hasher;

    size_t hashValue = hasher(myName);

    cout << "The hash value for \"" << myName << "\" is: " << hashValue << endl;

    return 0;
}

Task 3: A tombstone is a special marker used in open-addressing hash tables to indicate that a cell has been deleted. It's used to avoid breaking the probe sequence 
for items that were originally placed later in the array after a collision. The problem with tombstones is that they can accumulate, causing searches and insertions 
to become less efficient as the algorithm has to skip over them. Over time, the table can become filled with tombstones, which can degrade performance and lead to a 
premature and costly rehash operation.

Before: 
Index:   0    1    2    3    4    5
Table:  200  400  100  350  50   -

After:
Index:   0    1    2    3    4    5
Table:  200  400   T    T   50   -

Video: 

