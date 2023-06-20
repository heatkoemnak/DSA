#include <iostream>
#include <vector>

using namespace std;

class HashTable {
private:
    vector<vector<string>> table;
    int size;
    int num_items;

public:
    HashTable(int n) {
        size = n;
        num_items = 0;
        for (int i = 0; i < n; i++) {
            vector<string> v;
            table.push_back(v);
        }
    }

    void insert(string key) {
        int index = hash(key);
        table[index].push_back(key);
        num_items++;
    }

    bool search(string key) {
        int index = hash(key);
        for (int i = 0; i < table[index].size(); i++) {
            if (table[index][i] == key) {
                return true;
            }
        }
        return false;
    }

    void remove(string key) {
        int index = hash(key);
        for (int i = 0; i < table[index].size(); i++) {
            if (table[index][i] == key) {
                table[index].erase(table[index].begin() + i);
                num_items--;
            }
        }
    }

    int hash(string key) {
        int sum = 0;
        for (int i = 0; i < key.length(); i++) {
            sum += key[i];
        }
        return sum % size;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << i << ": ";
            for (int j = 0; j < table[i].size(); j++) {
                cout << table[i][j] << " -> ";
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable ht(5);
    ht.insert("apple");
    ht.insert("banana");
    ht.insert("orange");
    ht.insert("grape");
    ht.insert("watermelon");
    ht.print();
    cout << "search for apple: " << ht.search("apple") << endl;
    cout << "search for tomato: " << ht.search("tomato") << endl;
    ht.remove("banana");
    ht.print();
    return 0;
}