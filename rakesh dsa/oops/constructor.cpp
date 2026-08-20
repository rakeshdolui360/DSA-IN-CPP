#include<iostream>
using namespace std;
class car{
    string name;
    string color;
    public:                              // constructor is created inside public access modifier
    car(string newname, string newcolor){
        cout<<" constructor is called automatically when object is created "<<endl;
        name=newname;
        color=newcolor;


    }
    car(){
                              //default non parameterized constructor
    }

    void start(){
        cout<<" start the engine"<<endl;
    }
    void stop(){
        cout<<" stop the engine"<<endl;
    }

    string getname(){
        return name;     //it is not accessible as name is private but with help of constructor and getter we can get intialised name
    }

};



int main(){
    car c1(" bmw"," black");// constructor is called automatically when object is created
                            // if no custom constructor is available then compiler call own nonparameterized constructor
    // cout<<c1.name;     it is not accessible as name is private but with help of constructor and getter we can get intialised name                   
    cout<<c1.getname();



}