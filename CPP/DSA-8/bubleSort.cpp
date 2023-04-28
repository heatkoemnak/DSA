// Bubble sort in C++
#include <iostream>
using namespace std;
//display element of array
void Display_array(int array[4])
{
    cout<<"The array elements is->\n"<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"\t"<<array[i];
    }
    cout<<endl;
}
//swap between 2 position of array
void swap_element(  int array[4]){
    int pos1,pos2,temp;
    cout<<"Swap between 2 position"<<endl;


    cout<<"Enter Position 1: ";
    cin>>pos1;
    cout<<"Enter Position 2: ";
    cin>>pos2;
    temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;


    cout << "Position ("<<pos1<<","<<pos2<<") have been sorted-> \n"<<endl;


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
    cout << "Increment order(s->b)\n"<<endl;
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
    cout << "Reverse order(b->s)\n"<<endl;
    for(i=0; i<4; i++)
    {
        cout<< "\t"<<array[i];
    }
    cout << endl;
}
//display all option
void display_all(int array[4]){
    Display_array(array);
    cout<<"____________________________________"<<endl;
    swap_element(array);
    cout<<"____________________________________"<<endl;
 
    Asecending_order(array);
    cout<<"____________________________________"<<endl;
    Descending_order(array);


}
int main(){
    system("cls");
    int arr_size = 4;
    int array[arr_size]={12,3,1,5};
    int op;
    string choice;
    cout<<"Menu option"<<endl;
    cout<<"1. Display array"<<endl;
    cout<<"2. Swap between 2 position"<<endl;
    cout<<"3. Sort array by Ascending"<<endl;
    cout<<"4. Sort array by Descending"<<endl;
    cout<<"5. display all options "<<endl;
    cout<<"Input your number option: ";
    cin>>op;
    do{
        switch(op){
        case 1:{
            Display_array(array);
            cout<<"____________________________________"<<endl;
        }
        break;


        case 2:{
            swap_element(array);
            cout<<"____________________________________"<<endl;
        }
        break;
        case 3:{
            Asecending_order(array);
            cout<<"____________________________________"<<endl;
           
        }
        break;
        case 4:{
            Descending_order(array);
            cout<<"____________________________________"<<endl;
        }
        break;
        case 5:{
            display_all(array);
        }
        break;
    }
    cout << "Do you want to continue another option?(Y/N or yes/no):";
    cin >> choice;


    if(choice == "Y" || choice == "y"||choice=="Yes"||choice=="yes"){


        cout<<"Input your option: ";
        cin>>op;
    }else{
        cout<<"option exited!! ";
        break;
    }
    }while(true);
    return 0;


}
