#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0){
        return 1;
    }else{
        return fib( n + 1);
    }
}
int main(){
    int seq =fib(5);
    cout<<seq<<endl;
    return 0;
}