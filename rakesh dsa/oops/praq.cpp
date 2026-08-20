#include<iostream>
using namespace std;
class user{
    string id;
    string password;
    public:    
    string username;
    user(string id){
       this->id=id;

    }
    string getid(){    //getter required to access id as it is under private access
        return id;
    }    

    void setpassword(string password){
        this->password=password;
    }
    string getpassword(){
        return password;
    }
    
};
int main(){
    user u1("rakesh9083");
    u1.setpassword(" rakesh");
    u1.username=" rakesh dolui";


    cout<<u1.getid()<<endl;
    cout<<u1.getpassword()<<endl;
    cout<<u1.username<<endl;






}