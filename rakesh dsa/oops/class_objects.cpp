#include<iostream>
using namespace std;

// class creation
class student{
    string name;
    float cgpa;     //properties or attributes
    int age;

    void getpercentage(float cgpa){
        cout<<(cgpa*10)<<endl;         // function or member function or methods

    }
};

class user{
    string id;                           //properties or attributes
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<" deactivating account"<<endl;           // function or member function or methods
    }

    void editbio(string newbio){
        bio=newbio;
    }

};
int main(){
    student s1;
    student s2;      // objects create, after creating objects memory is allocated
    user u1;
    user u2;

    cout<<sizeof(s1)<<endl;
    cout<<sizeof(s2)<<endl;
    cout<<sizeof(u1)<<endl;
    cout<<sizeof(u2)<<endl;


}