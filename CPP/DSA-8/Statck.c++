#include <iostream>
#include <vector>
using namespace std;
class Mystack{
    private:
    // int top;
    vector<double> v;

    public:
    ArrayIns(int max) : element(0){ //create constructor
    v.resize(max); //resize vector
    }
    int element;
    void insert(double value){ // function insert
    v[element] = value; //take value and store value into array
    element++; //increament 
    }
    void push(){


    }
    void display()//function display
    { 
    for(int j=0; j<element; j++) //created a for loop to receive elements.
    cout << v[j] << " "; //print out array
    cout << endl;
    }

};
int main(){
    system("cls")
    int maxSize = 100; // declare array size
    Mystack arr(maxSize); // create array
    arr.insert(77); //insert array value
    arr.insert(99);
    arr.insert(44);
    arr.insert(55);
    arr.insert(22);
    arr.insert(88);
    arr.insert(11);
    arr.insert(00);
    arr.insert(66);
    arr.insert(33);
    arr.display();
    return 0;

}