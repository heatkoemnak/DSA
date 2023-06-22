//set libraryu
using namespace std;
#include<iostream>
int sumfact(int num){
    if (num>0){
        return num*sumfact(num-1);

    }else{
        return 1;
    }
 }
  int main(){
    int result = sumfact(5);
    cout<<"result is "<< result;
    return 0;
  }


