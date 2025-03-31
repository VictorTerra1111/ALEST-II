#include <string>
#include <iostream>
#include "../HPPS/file_manage.hpp"
#include "../HPPS/separatechaining_hashtable.hpp"
#include "../HPPS/linearprobing_hashtable.hpp"

using namespace std;

int main() {
    // Initialize the hash table
    // HashTable<string, string> ht;

    ReadInfo();
    LinearProbingHashTable<string, string> ht;

    // Insert some key-value pairs
    ht.insert("key1", "value1");
    ht.insert("key2", "value2");
    ht.insert("key3", "value3");

    // Retrieve and print the values
    cout << ht.get("key1") << endl;
    cout << ht.get("key2") << endl;
    cout << ht.get("key3") << endl;

    // Check if a key exists
    cout << ht.contains("key1") << endl;

    return 0;
}
