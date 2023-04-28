#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
    struct node* prev;

    struct node* first =NULL;
    struct node* second =NULL;
    struct node* thired =NULL;
    struct node* fourth=NULL;
    struct node* last=NULL;
    


};
int main(){
    



    node* first = new node();
    node* second = new node();
    node* thired = new node();
    node* fourth = new node();
    node* last = new node();
    // first = head; 
    first->data=19;
    second->data=50;
    thired->data=15;
    fourth->data=62;
    last->data=23;
    //connect node
    first->next=second;
    first->prev=NULL;

    second->next=thired;
    second->prev=first;

    thired->next=fourth;
    thired->prev=second;

    fourth->next=last;
    fourth->prev=thired;

    last->next=NULL;
    last->prev=fourth;


    cout<<"Forward"<<endl;  
    while(first !=NULL){
        cout<<" "<<first->data<<"  ";
        first=first->next;

    }
    cout<<endl;
    cout<<"Backward"<<endl;  
    while(last !=NULL){
        cout<<" "<<last->data<<"  ";
        last=last->prev;

    }
    // cout<<"backward"<<endl;
    //  while(head_node && second_node!=NULL){
    //     cout<<" "<<head_node->data<<"  "<<second_node->data<<" "<<second_node->next;
    //     head_node=head_node->next;

    // }
    
    return 0;

}