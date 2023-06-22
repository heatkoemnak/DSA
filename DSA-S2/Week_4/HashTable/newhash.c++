#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int size = 10;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class HashTableEntry {
   public:
      int k;
      int v;
      HashTableEntry(int k, int v) {
         this->k= k;
         this->v= v;
      }
};
class HashMapTable {
   private:
      HashTableEntry **t;
   public:
      HashMapTable() {
         t = new HashTableEntry * [size];
         for (int i = 0; i< size; i++) {
            t[i] = NULL;
         }
      }
      int HashFunc(int k) {
         return k % size;
      }
      void Insert(int k, int v) {
         int h = HashFunc(k);
         while (t[h] != NULL && t[h]->k != k) {
            h = HashFunc(h + 1);
         }
         if (t[h] != NULL)
            delete t[h];
         t[h] = new HashTableEntry(k, v);
      }
            void Remove(int k) {
         int h = HashFunc(k);
         while (t[h] != NULL) {
            if (t[h]->k == k)
               break;
            h = HashFunc(h + 1);
         }
         if (t[h] == NULL) {
            cout<<"No Element found at key "<<k<<endl;
            return;
         } else {
            delete t[h];
         }
         cout<<"Element Deleted"<<endl;
      }
        ~HashMapTable() {
         for (int i = 0; i < size; i++) {
            if (t[i] != NULL)
               delete t[i];
               delete[] t;
         }
      }

      void displayHash(int n){
        for (int i=0; i<size; i++){
          cout << i;
          for (auto n : table [i])
            cout << "Display data: " <<n;
          cout << endl;
      }
    }
};
int main() {
   HashMapTable hash;
   int k, v, n; 
   int choice;
   while (1) {
      cout<<"1.Insert element into the table"<<endl;
      cout<<"2.Delete element at a key"<<endl;
      cout<<"3.Display all element"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter your choice: ";
      cin>>choice;
      switch(choice) {
         case 1:
            cout<<"Enter element to be inserted: ";
            cin>>v;
            cout<<"Enter key at which element to be inserted: ";
            cin>>k;
            hash.Insert(k, v);
         break;
         case 2:
            cout<<"Enter key of the element to be deleted: ";
            cin>>k;
            hash.Remove(k);
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