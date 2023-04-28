#include<iostream>
using namespace std;
void bubbleSort(){

    int n,arr,j,temp;


    arr[]={12,3,1,5};

    
    
    
    for(i=0;i<arr;i++){
        for(j=0;j<arr;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        for(i=0; i<arr; i++)
    {
        cout<< arr[i] << " \t";
    }
    


        
        

    }

}

int main(){
    bubbleSort();
    

    

}
