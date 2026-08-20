#include<iostream>
using namespace std;
class car{
    string name;
    string color;
    public:                            // constructor is created inside public access modifier
    car(string name, string color){
        cout<<" constructor with parameter"<<endl; //custom  parameterized constructor
        this->name=name;        // this pointer points current object
        this->color=color;      // this->prop and *(this)->prop samme


    }
    car(){
        cout<<" constructor without parameter"<<endl; //default non parameterized constructor
    }

    void start(){
        cout<<" start the engine"<<endl;
    }
    void stop(){
        cout<<" stop the engine"<<endl;
    }

    string getname(){
        return name;     
    }

};



int main(){
    car c1(" bmw"," black");   // parameterized constructor is called automatically
    car c2;                   // if no custom constructor is available then compiler call own nonparameterized constructor

    //constructor overloading ->multiple constructor with same name but different parameter 



}