#include<stdlib.h>
#include<iostream>
using namespace std;


struct node {
    char data;
    struct node *left;
    struct node *right;

};

struct node *NewNode(char data){

    struct node * node = (struct node*)malloc(sizeof(struct node));
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

    struct node *root = NewNode('A');
    root->left=NewNode('B');
    root->left->left=NewNode('D');
    root->left->right=NewNode('E');
    root->left->left->left=NewNode('H');
    root->left->left->right=NewNode('I');

    root->right=NewNode('C');
    root->right->left=NewNode('F');
    root->right->right=NewNode('G');

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

