#include <iostream>
using namespace std;
void reverse(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse(arr, start+1, end-1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr, 0, 6);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
