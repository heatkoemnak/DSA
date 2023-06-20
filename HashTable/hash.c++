#include <iostream>
#include <list>

using namespace std;

class HashTable {
private:
    int size;
    list<int>* table;

public:
    HashTable(int size) {
        this->size = size;
        table = new list<int>[size];
    }

    int hashFunction(int key) {
        return key % size;
    }

    void Insert() {
        int value;
        cout<<"Enter value:";
        cin>>value;
        int index = hashFunction(value);
        table[index].push_back(value);
    }
    void Delete(){
        int value;
        cout<<"Enter value: ";
        cin>>value;
        int index = hashFunction(value);
        table[index].remove(value);
    }
    void Search(){
        int value;
        cout<<"Enter value: ";
        cin>>value;
        int index = hashFunction(value);
        for(auto it=table[index].begin();it!=table[index].end();it++){
            if(*it==value){
                cout<<"value :"<<value<<" found at index :"<<index<<endl;
                return;
            }
        }
        cout<<"value "<<value<<" not found!"<<endl;
        
    }

    void Display() {
        for (int i = 0; i < size; i++) {
            cout << i << " --> ";
            for (auto it = table[i].begin(); it != table[i].end(); it++) {
                cout << *it << " -> ";
            }
            cout << "NULL\n";
           
        }
    }
};

int main() {
    HashTable ht(10);

   
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
            case 1:
                ht.Insert();
                break;
            case 2:
                ht.Delete();
                break;
            case 3:
                ht.Display();
                break;
            case 4:
                ht.Search();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}