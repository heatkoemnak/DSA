#include<iostream>
using namespace std;


 struct {
    int key;
    int value;
 }
 node[10];

 void Insert(){

        int value;
        cout<<"Enter value: ";
        cin>>value;
        int index=value%10;
        if(node[index].value==0){
            node[index].value=value;
            node[index].key=index;
        }
        else{
            //collision
            int i=0;
            while(node[index].value!=0){
                index=(index+1)%10;
                i++;
                if(i==10){
                    cout<<"Hash table is full"<<endl;
                    return;
                }
            }
            node[index].value=value;
            node[index].key=index;
            
        }

        
        



        
 }
    



    void Delete(){
            int value;
            cout<<"Enter value: ";
            cin>>value;
            int index=value%10;
            if(node[index].value==value){
                node[index].value=0;
                node[index].key=index;
            }
            else{
                int i=0;
                while(node[index].value!=value){
                    index=(index+1)%10;
                    i++;
                    if(i==10){
                        cout<<"Value not found"<<endl;
                        return;
                    }
                }
                node[index].value=0;
                node[index].key=index;
            }
    }
  
   
    void Display(){

        for(int i=0;i<10;i++){
            cout<<node[i].key<<"-->"<<node[i].value<<endl;
            
            
        }

     
        
    }


int main() {
    int choice;
    while(1){
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    


    
    return 0;
}

