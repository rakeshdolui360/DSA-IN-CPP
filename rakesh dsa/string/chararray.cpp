#include<iostream>
using namespace std;

int main(){
// character array
char str[10];
char str1[10]={'a','b','c'};
char str2[4]={'a','b','c','d'};

cout<<str[0]<<endl;
cout<<str[1]<<endl;  // they have indeterminate values.
cout<<str[2]<<endl;

cout<<str1[0]<<endl;
cout<<str1[1]<<endl;
cout<<str1[3]<<endl;  // The remaining elements are automatically initialized to '\0' so no visible output

cout<<str2[0]<<endl;
cout<<str2[3]<<endl;
cout<<str2[4]<<endl;//This is called out-of-bounds access

char str3[4]={'c','o','d','e'};
char str4[5]={'c','o','d','e','\0'};  // '\0' ascii value is 0 ,it eans string is end here

cout<<str3<<endl;  // output > codeabcdabc    as this is not valid string , not explicitly terminted by '\0'
cout<<str4<<endl;  // output > code           as this is  valid string explicitly terminted by '\0'


}