

#include <iostream>
using namespace std;
int fib(
    int x, int i=0
) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
        return(fib(x-1)+fib(x-2));
     
   }
   
  
}
int main() {
    int x=6 , i=0;
    cout << "\nFibonnaci Series : ";
     while(i < x) {
        cout << " " << fib(i);
        i++;
    
   }
    

   
   return 0;}