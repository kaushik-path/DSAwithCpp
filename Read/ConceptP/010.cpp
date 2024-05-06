//Write a code to implement the concept of hashing technique.
#include <iostream>
#include <list>
#include <vector>

using namespace std;

// HashTable class
class HashTable {
private:
    vector<list<int>> table;
    int capacity;

    // Hash function
    int hashFunction(int key) {
        return key % capacity;
    }

public:
    // Constructor
    HashTable(int capacity) : capacity(capacity) {
        table.resize(capacity);
    }

    // Function to insert a key into the hash table
    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    // Function to search for a key in the hash table
    bool search(int key) {
        int index = hashFunction(key);
        for (int k : table[index]) {
            if (k == key) {
                return true;
            }
        }
        return false;
    }

    // Function to remove a key from the hash table
    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }
};

int main() {
    // Initialize the hash table with capacity 10
    HashTable hashTable(10);

    // Insert some keys
    hashTable.insert(5);
    hashTable.insert(15);
    hashTable.insert(25);

    // Search for keys
    cout << "Searching for key 5: " << (hashTable.search(5) ? "Found" : "Not Found") << endl;
    cout << "Searching for key 10: " << (hashTable.search(10) ? "Found" : "Not Found") << endl;

    // Remove a key
    hashTable.remove(15);

    // Search for the removed key
    cout << "Searching for key 15 after removal: " << (hashTable.search(15) ? "Found" : "Not Found") << endl;

    return 0;
}
