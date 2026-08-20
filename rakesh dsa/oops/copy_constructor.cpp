#include<iostream>
using namespace std;
class car{
    public:
    string name;
    string color;

   // constructor is created inside public access modifier
    car(string name, string color){
        this->name=name;        // this pointer points current object
        this->color=color;      // this->prop and *(this)->prop samme


    }

    car(car&original){                         // copy constuctor
        cout<<" copying from original to new object"<<endl;
        name=original.name;
        color=original.color;

    }

    string getname(){
        return name;     // not required as everything is under public access
    }

};



int main(){
    car c1(" bmw"," black");   
    car c2(c1);             // if no custom copy constructor is available then compiler call own copy constructor
    cout<<c2.name<<endl;                  
    cout<<c2.color<<endl;                  





}