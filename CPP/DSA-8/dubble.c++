#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* first;
    struct node* second;
    struct node* thired;
    struct node* fourth;
    struct node* last;


};
int main(){
    


    node* head_node = new node();
    head_node->first = head; 



    head_node->data = 43;
    head_node->prev=NULL;
    node* second_node = new node();
    second_node->data = 38;
    second_node->prev=head_node;
    second_node->next=NULL;
    head_node->next=second_node;
    cout<<"Forward"<<endl;  
    while(head_node !=NULL){
        cout<<" "<<head_node->data<<"  ";
        head_node=head_node->next;

    }
    cout<<endl;
    // cout<<"backward"<<endl;
    //  while(head_node && second_node!=NULL){
    //     cout<<" "<<head_node->data<<"  "<<second_node->data<<" "<<second_node->next;
    //     head_node=head_node->next;

    // }
    
    return 0;

}