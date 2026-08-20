#include<iostream>
using namespace std;

// class creation
class student{
    private:
    string name;               // private access modifier only accessble inside class
    public:
    float cgpa;     
    int age;                  // public  access modifier accessble everywhere

    void getpercentage(float cgpa){
        cout<<(cgpa*10)<<endl;         

    }
};

class user{
    private:
    string id;                          
    string username;     // private access modifier only accessble inside class
    string password;
    public:
    string bio;

    void deactivate(){
        cout<<" deactivating account"<<endl;           
    }

    void editbio(string newbio){                       // public  access modifier accessble everywhere
        bio=newbio;
        cout<<bio<<endl;
    }

};
int main(){
    student s1;
    student s2;      
    user u1;
    user u2;

    s1.cgpa=9.5;
    cout<<s1.cgpa<<endl;
    s1.age=20;                         // public  access methods and properties are value assigned and taken access 
    cout<<s1.age<<endl;
    s1.getpercentage(9.5);

    u1.bio="rakesh";
    cout<<u1.bio<<endl;
    u1.editbio("hi myself rakesh");
    cout<<u1.bio<<endl;
    u1.deactivate();



}