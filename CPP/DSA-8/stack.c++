#include <iostream>
#include <stack>
using namespace std;


void display_Stack(stack<int>mySt)
{ 
    while(!mySt.empty()){
            cout<<mySt.top()<<" ";
            mySt.pop();

    }
   
}
void check_Stack(stack<int>mySt){
    if(mySt.empty()==0){
        cout<<"There is some elements in my stack!"<<endl;


    }else{
        cout<<"my stack is empty!"<<endl;

    }
}



int main(){
    system("cls");
    stack<int>myStack;
    myStack.push(4);
    myStack.push(9);
    myStack.push(7);
    myStack.push(2);
    myStack.push(5);

    cout<<" the size of my stack :"<<myStack.size();
    cout<<endl;

    cout<<"the current element in my stack:";
    display_Stack(myStack);
    cout<<endl;
    

    cout<<"Current of my stack:";
    check_Stack(myStack);
    cout<<endl;

    myStack.pop();
    myStack.pop();
    cout<<"The size of my stack after apply pop():"<<myStack.size();
    cout<<endl;

    cout<<"the current element in my stack after pop():";
    display_Stack(myStack);
    cout<<endl;
    cout<<"The value at Top of my stack:"<<myStack.top()<<endl;
    return 0;

}