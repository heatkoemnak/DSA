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

    void search(string key) {
        int index = hash(key);
        for (int i = 0; i < table[index].size(); i++) {
            if (table[index][i] == key) {
                cout << "found at index " << index << endl;
                return;
            }
        }
        cout << "not found" << endl;
        
    }

    void Delete(string key) {
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

    void Display() {
        cout<<"-----------------------"<<endl;
        for (int i = 0; i < size; i++) {
            cout << i << ": ";
            for (int j = 0; j < table[i].size(); j++) {
                cout << table[i][j] << " -> ";
            }
            cout << endl;
        }
        cout<<"-----------------------"<<endl;
    }
};

int main() {
    HashTable ht(5);
    int choice;
    while(1){
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Search"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                string key;
                cout<<"Enter key: ";
                cin>>key;
                ht.insert(key);
                break;
            }
            case 2:{
                string key;
                cout<<"Enter key: ";
                cin>>key;
                ht.Delete(key);
                break;
            }
            case 3:{
                ht.Display();
                break;
            }
            case 4:{
                string key;
                cout<<"Enter key: ";
                cin>>key;
                ht.search(key);
                break;
            }
            case 5:{
                exit(0);
            }
            default:{
                cout<<"Invalid choice"<<endl;
            }
            
        }
    }
    return 0;
}