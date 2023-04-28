#include <iostream>
#include <vector>
using namespace std;
class ArrayIns{ 
    private:
    vector<double> v; //creating double type vector V
    int nElems; //initialize a private variable
    //
    public:
    ArrayIns(int max) : nElems(0){ //create constructor
    v.resize(max); //resize vector
    }
    //
    void insert(double value){ // function insert
    v[nElems] = value; //take value and store value into array
    nElems++; //increament 
    }
   //functio display array
    void display()//function display
    { 
    for(int j=0; j<nElems; j++) //created a for loop to receive elements.
    cout << v[j] << " "; //print out array
    cout << endl;
    }
    // Function to sort an array using: insertion sort
    void ascending()//ascending
    {
    int in, out;
    for(out=1; out<nElems; out++){ //loop
    double temp = v[out]; //take value
    in = out; //assign 
    while(in>0 && v[in-1] >= temp) // Compare key with each element on the left of it until an element smaller than
    {
    v[in] = v[in-1]; //shift item to right
    --in; //decrement elements
    }
    v[in] = temp; //insert in right place
    }
    }
    // functio descending 
    void descending(){
    int in, out;
    for(out=1; out<nElems; out++){ 
    double temp = v[out]; 
    in = out;
    while(in>0 && v[in-1] <= temp) 
    {
    v[in] = v[in-1]; 
    --in;
    }
    v[in] = temp; 
    } 
    }
    
}; //End class
//main function 
int main()
{
    system("cls");
    int maxSize = 100; // declare array size
    ArrayIns arr(maxSize); // create array
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

    cout<< "The original array: "<< endl;
    cout<<endl;
    arr.display(); //
    cout<< endl;
    cout<<"Option 1 - ascending"<<endl;
    cout<<"Option 2 - descending"<<endl;
    cout<<endl;
    
    cout<< "The order array after apply insertion sort-> "<< endl;
    int option;
    cout<<"Enter option(1 or 2):";
    //create an option for user
    //If user input number 1 program will execute in case1, and if user input number 2 program will execute in case2
    cin>>option; //user input
    switch(option){
        case 1:
        cout<<endl;
        arr.ascending();
        break;
        case 2:
        cout<<endl;
        arr.descending();
        break;
       
         
    }
   arr.display();// display value of array element 

    cout<< endl;
return 0;
} //End main