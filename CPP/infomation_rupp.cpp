#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class informRUPP{
    public:
    int No;
    int number1;
    int number2;
    string Fac;
    string Depname;

    void output(){
        cout<<"How many Faculty in RUPP:";
        cin>>number1>>number2;

        cout<<"There are "<<number1<<" of Faculty in RUPP"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"No."<<"\t         "<<"Name of Faculty"<<endl;
    }
    void headlist(){
        cout<<No<<"\t    "<<Fac <<endl;

    }
    void FEDep(){
       
        cout<<"\t    "<<Depname<<endl;
    }
    void FE(){
        cout<<"There are 4 of Deparment of Faculty of Engineering"<<endl;
        cout<<"-----------------------------------------------------"<<endl;

    }
};
int main(){
    informRUPP obj1;
    obj1.output();
   
    obj1.No=1;
    obj1.Fac="Faculty of Sciences";
    
    obj1.headlist();
    informRUPP obj2;
    obj2.No=2;
    obj2.Fac="Faculty of Social Sciences & Humanity";
    
    obj2.headlist();
    informRUPP obj3;
    obj3.No=3;
    obj3.Fac="Faculty of Engineering";
    
    obj3.headlist();
    informRUPP obj4;
    obj4.No=4;
    obj4.Fac="Faculty of Development Studies";
    
    obj4.headlist();
    informRUPP obj5;
    obj5.No=5;
    obj5.Fac="Faculty of Education";
   
    obj5.headlist();
    informRUPP obj6;
    obj6.No=6;
    obj6.Fac="Faculty of Foriegn Languages";
   
    obj6.headlist();

    obj6.FE();

    informRUPP obj7;
    obj7.Depname="Information Tecnology Engineering";
    obj7.FEDep();

    informRUPP obj8;
    obj8.Depname="Department Telecommunication & Electronic Engineering ";
    obj8.FEDep();

    informRUPP obj9;
    obj9.Depname="Department of bio Engineering";
    obj9.FEDep();

    informRUPP obj10;
    obj10.Depname="Deartment Automatic & Suply Chain System Engineering";
    obj10.FEDep();
    
    
    
    

    return 0;
}