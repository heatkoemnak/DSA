#include <iostream>
using namespace std;

void display(int arr[], int size ){
     for(int i=0;i<size ;i++){
        cout<<arr[i]<<" ";

    } 

}
void revers(int arr[], int size){
    for(int i =size ;i>0;i--){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int size =5;
    int arr[size]={19,50,15,62,23};
    cout<<"Print Array"<<endl;
    display(arr,size);
    cout<<"Reversed Array"<<endl;
    revers(arr, size);

    // return 0;
}