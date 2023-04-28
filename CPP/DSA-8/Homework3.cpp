// Bubble sort in C++
#include <iostream>
using namespace std;
//function display element of array
void Display_array(int array[4])
{ 
    cout<<"The "<<"4"<<" array elements is->\n"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t"<<array[i];
    }
    cout<<endl;
}
//Function swap between 2 possition of array
void swap_element(  int array[4],int pos1,int pos2){

    int temp;
    temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;

    cout << "Sorted array between posistion ("<<pos1<<","<<pos2<<") elements-> \n"<<endl;

    for(int i=0; i<4; i++)
    {
        cout<<"\t"<<array[i];
    }
    cout << endl;

}
//sort array in order small to big
void Asecending_order(int array[4]){
    int i, j, temp;

    cout << "Unordered array-> \n"<<endl;
   
    for(i=0; i<4; i++)
    {

        cout <<"\t"<< array[i];
    }
    cout << endl;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(array[j]>array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Sorted elements in order(s->b)\n"<<endl;
    for(i=0; i<4; i++)
    {
        cout<< "\t"<<array[i];
    }
    cout << endl;
}
//revers array big to small
void Descending_order(int array[4]){
    int i, j, temp;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(array[j]<array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Reverse elements in order(b->s)\n"<<endl;
    for(i=0; i<4; i++)
    {
        cout<< "\t"<<array[i];
    }
    cout << endl;

}
  

int main(){
    system("cls");
    int arr_size = 4;
    int array[arr_size]={12,3,1,5};

    Display_array(array);
    cout<<"____________________________________"<<endl;

    swap_element(array,0,3);
    cout<<"____________________________________"<<endl;
  
    Asecending_order(array);
    cout<<"____________________________________"<<endl;
    Descending_order(array);
 return 0;
}
