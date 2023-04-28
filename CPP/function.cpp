#include<iostream>
using namespace std;
class classBox {       // The class
  public:             // Access specifier
    float width; 
    float length;
    float heigth;  
    float V;

    ReadData(){
        
    cout << "width: ";
    cin >> length;
    cout << "length: ";
    cin >> width;
    cout << "heigth: ";
    cin >> heigth;
    return V=width* length *heigth;
}
};

int main(){
    classBox myObj;
    
    cout<<"The valume of box is "<<myObj.ReadData();
    return 0;
    
    

}
