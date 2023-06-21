#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int size = 10;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class HashTableEntry {
   public:
      int key;
      int value;
      HashTableEntry(int key, int value) {
         this->key= key;
         this->value= value;
      }
};
class HashMapTable {
   private:
      HashTableEntry **table;
   public:
        HashMapTable() {
            table = new HashTableEntry * [size];
            for (int i = 0; i< size; i++) {
                table[i] = NULL;
            }
        }
        int HashFunc(int key) {
            return key % size;
        }
        void Insert(int key, int value) {
            int index = HashFunc(key);
            while (table[index] != NULL && table[index]->key != key) {
                index = HashFunc(index + 1);
            }
            if (table[index] != NULL)
                delete table[index];
            table[index] = new HashTableEntry(key, value);
        }
        void Remove(int key) {
            int index= HashFunc(key);
            while (table[index] != NULL) {
                if (table[index]->key == key)
                break;
                index = HashFunc(index + 1);
            }
         if (table[index] == NULL) {
            cout<<"No Element found at key "<<key<<endl;
            return;
         } else {
            delete table[index];
         }
         cout<<"Element Deleted"<<endl;
      }
        ~HashMapTable() {
         for (int i = 0; i < size; i++) {
            if (table[i] != NULL)
               delete table[i];
               delete[] table;
         }
      }

      void displayHash(){
        for (int i=0; i<size; i++){
            if (table[i] != NULL)
                cout << i << " --> "
                     << table[i]->value << endl;
            else
                cout << i << endl;
          
      }
    }
};
int main() {
   HashMapTable hash;
   int key, value, n; 
   int c;
   while (1) {
      cout<<"1.Insert element into the table"<<endl;
      cout<<"2.Delete element at a key"<<endl;
      cout<<"3.Display all element"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter your choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Enter value: ";
            cin>>value;
            cout<<"Enter key: ";
            cin>>key;
            hash.Insert(key, value);
         break;
         case 2:
            cout<<"Enter key of the element to be deleted: ";
            cin>>key;
            hash.Remove(key);
         break;
         case 3:
           hash.displayHash();
         break;
         case 4:
            exit(1);
         default:
            cout<<"\nEnter correct option\n";
      }
   }
   return 0;
}