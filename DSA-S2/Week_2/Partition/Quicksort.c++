#include <iostream>

using namespace std;

void swap(int arr[], int pos1, int pos2) {
   int temp;
   temp = arr[pos1];
   arr[pos1]=arr[pos2];
   arr[pos2]=temp;
}

int partition(int arr[], int first_ind, int last_ind) {

    int i = first_ind;
    int j = last_ind;

    while( i < j ){
        while( arr[i] <= arr[last_ind] && i < j ){
            i++;
        }
        while( arr[j] > arr[last_ind] ){
            j--;
        }
        if( i < j ){
            swap(arr,i,j);
        }

        

    }
    swap(arr,i,last_ind);
    return i;

}

void quickSort(int arr[], int first_ind, int last_ind) {
    if (first_ind < last_ind) {

        int pi = partition(arr, first_ind, last_ind);


        quickSort(arr, first_ind, pi - 1);
        quickSort(arr, pi + 1, last_ind);
    }
}

int main() {
    int arr[] = {8, 15, 4, 3, 18, 7, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    quickSort(arr, 0, n - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}