#include<stdlib.h>
#include<iostream>
using namespace std;


struct node {
    int data;
    struct node *left;
    struct node *right;
    struct node *mid;

};

struct node *NewNode(int data){

    struct node * node = (struct node*)malloc(sizeof(struct node));
    node->data =data;
    node->left=NULL;
    node->right=NULL;
    node->mid=NULL;
    return (node);
}

void travelInOrder(struct node *temp){

    if(temp!=NULL){
        
        travelInOrder(temp->left);
        cout<<" "<<temp->data;
        travelInOrder(temp->mid);
        travelInOrder(temp->right);
        
    }

}
void travelPreOrder(struct node *temp){
    if(temp!=NULL){
        cout<<" "<<temp->data;
        travelPreOrder(temp->left);
        travelInOrder(temp->mid);
        travelPreOrder(temp->right);
    }
}

void travelPosOrder(struct node *temp){
    if(temp!=NULL){
            travelPosOrder(temp->right);
            travelPosOrder(temp->mid);
            travelPosOrder(temp->left);
            cout<<" "<<temp->data;
        
    }

}

int main(){

    struct node *root = NewNode(1);

    root->left=NewNode(2);
    root->left->left=NewNode(3);
    root->left->right=NewNode(6);
    root->left->left->left=NewNode(4);
    root->left->left->right=NewNode(5);

    root->mid=NewNode(7);

    root->right=NewNode(8);
    root->right->right=NewNode(12);
    root->right->left=NewNode(9);
    root->right->left->left=NewNode(10);
    root->right->left->right=NewNode(11);

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

