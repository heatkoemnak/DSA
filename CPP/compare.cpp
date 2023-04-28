#include<iostream>

using namespace std;
void maximum(){
    int num1; 
    int num2;

    cout << "Enter two numbers: ";
    cin >> num1>>num2;
    
    if (num1>num2){
        cout<<"maximun = "<<num1;
        
    }else if(num1<num2){

        cout<<"maximun = "<<num2;
    }else{

        cout<<"equal"<<endl;
    }
}

int main(){

    maximun();
    return 0;

}

