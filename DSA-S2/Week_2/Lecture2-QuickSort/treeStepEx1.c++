#include <iostream>
using namespace std;

void swap(int arr[], int post1, int post2){
    int temp = arr[post1];
    arr[post1] = arr[post2];
    arr[post2] = temp;
}
void QuickSort(int arr[], int n){
    int pivot = arr[n-1];
    int i = 0;
    int j = n-2;
    while(i < j){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < j){
            swap(arr, i, j);
        }
    }
    swap(arr, i, n-1);
    if(i > 1){
        QuickSort(arr, i);
    }
    if(n-i-1 > 1){
        QuickSort(arr+i+1, n-i-1);
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    QuickSort(arr, 6);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

