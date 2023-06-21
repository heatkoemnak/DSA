#include<stdlib.h>
#include<iostream>
using namespace std;


struct node {
    int data;
    struct node *left;
    struct node *right;

};

struct node *NewNode(int data){

    struct node * node = (struct node*)malloc(sizeof(struct node));
    // struct node * node = new node();
    node->data =data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}

void travelInOrder(struct node *temp){

    if(temp!=NULL){
        travelInOrder(temp->left);
        cout<<" "<<temp->data;
        travelInOrder(temp->right);
    }

}
void travelPreOrder(struct node *temp){
    if(temp!=NULL){
        cout<<" "<<temp->data;
        travelPreOrder(temp->left);
        travelPreOrder(temp->right);
       
    }


}

void travelPosOrder(struct node *temp){
    if(temp!=NULL){
         
        travelPosOrder(temp->left);
        travelPosOrder(temp->right);
        cout<<" "<<temp->data;

        
    }

}

int main(){

    struct node *root = NewNode(2);
    root->left=NewNode(7);
    root->left->left=NewNode(2);
    root->left->right=NewNode(6);
    root->left->right->left=NewNode(5);
    root->left->right->right=NewNode(11);

    root->right=NewNode(5);
    root->right->right=NewNode(9);
    root->right->right->left=NewNode(4);

    cout<<"InOrder Traversal"<<endl;
    travelInOrder(root);
    cout<<endl;
    cout<<"PreOrder Traversal"<<endl;
    travelPreOrder(root);
    cout<<endl;
    cout<<"PosOrder Traversal"<<endl;
    travelPosOrder(root);
    cout<<endl;
    return 0;

}

