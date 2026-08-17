#include<iostream>
using namespace std;

int main(){
string str="rakesh";
string str2="rakesh  is a good boy,rakesh is doing good";


// member function of string
cout<<str.length()<<endl;
cout<<str.substr(1,4)<<endl;
cout<<str2.find("is")<<endl;// to find 2nd occurance we have to pass larger idx where 1st occurance is found of that word
                            // unknown word will return -1


}