#include<iostream>
using namespace std;

int main(){

    // character data type 
    char ch1='a';  // a to z
    char ch2='G';  // A to Z
    char ch3='0';  // 0 to 9
    char ch4='*';  //special character
    char ch5='\n'; // next line,null character also can be character
    char ch6='\0';
    char ch7='\t';  
    
    cout<<ch4<<endl;

    cout<<int(ch2)<<endl;  // for  ascii value of character we have to convert it into int
                           // '\0' ascii value is 0


    int position=ch2-'A'; // to find position of any alphabet, position starts from 0 th idx
    cout<<position<<endl;


}