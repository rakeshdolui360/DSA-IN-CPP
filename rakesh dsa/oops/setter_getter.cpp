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

    //setter 
    void setid(string newid){
        id=newid;
    }
    void setpassword(string newpassword){
        password=newpassword;                         // private access modifier can be used with the help of setter and getter
    }

    //getter
    string getid(){
        return id;
        
    }
    string getpassword(){
        return password;
    }

};

int main(){
    student s1;
    student s2;      
    user u1;
    user u2;

    u1.setid("rakesh");
    u1.setpassword("rakesh1234");
    cout<<u1.getid()<<endl;
    cout<<u1.getpassword();



}