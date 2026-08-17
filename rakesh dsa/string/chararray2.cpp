#include<iostream>
#include<cstring>
using namespace std;

int main(){
// character array create
char work[]="code";
char work1[5]="code";    // string literals "code" is stored in character array so it is automatically terminated by '\0'
char work2[50]="code";

char work3[]={'c','o','d','e','\0'};
char work4[50]={'c','o','d','e','\0'};

cout<<work<<endl;
cout<<work1<<endl;
cout<<work2<<endl;
cout<<work3<<endl;
cout<<work4<<endl;

cout<<strlen(work)<<endl;
cout<<strlen(work1)<<endl;
cout<<strlen(work2)<<endl;  // string length ,here '\0' is not counted
cout<<strlen(work3)<<endl;
cout<<strlen(work4)<<endl;


char work5[]={'c','o','d','e'};  // not valid string so output is not terminated by '\0'
cout<<work5<<endl;



// string  literals and character can be updated 
work[1]='d';
cout<<work<<endl;
work4[1]='c';
cout<<work4<<endl;



// inputs in character array
char str[50];
cin>>str;
cout<< " str is = "<<str<<endl;  // but when input is taken if there is whitespace ,then after that space everything is ignored

char str1[50];
cin.getline(str1,50,'.');
cout<< " str1 is = "<<str1<<endl;  // now every thing including space is also coming in output ,
                             //but input taking time if there is any delimiter'.' after that everything is ignored,that part will not come in output

}