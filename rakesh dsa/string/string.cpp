#include<iostream>
using namespace std;

int main(){
string str="hello";  // string is class, str is object, string have member function like length() which can only be used by objects,  objects have some property

cout<<str<<endl;     // str stored in contiguous memory, operator like +,== ,<,> supports, dynamic change is possible

str="rakesh";
cout<<str<<endl;   // in character array this will give error

cout<<str[0]<<endl;
cout<<str[5]<<endl;

string str2="dolui";
string str3="rakesh";
//operator like +,== ,<,> supports
cout<<(str2<str3)<<endl;
cout<<(str3==str2)<<endl;
cout<<(str2>str3)<<endl;

//inputs taking 

cin>>str;                   // but if there is white space in input ,after that everything is ignored
cout<<" str is "<<str<<endl;

getline(cin,str,'.');     // but if there is delimiter '.' in input ,after that everything is ignored
cout<<" str is "<<str<<endl;



}