#include<iostream>
#include<cstring>
using namespace std;

int main(){

    // strcpy(dest,src)
    char str[50];
    // str =" hello rakesh";   // it will give error, as like this value can not be assigned

    strcpy(str,"hello rakesh");
    cout<<str<<endl;

    char str1[50]="rakesh";
    char str2[50];
    strcpy(str2,str1);

    cout<<str2<<endl;



    //strcat(str3,str4)
    char str3[50]="rakesh";
    char str4[50]=" dolui";
    strcat(str3,str4);
    cout<<str3<<endl;   // strcat will store into str3
    cout<<str4<<endl;   // no change into str4
   

    //strcmp(str1,str2)
    char str5[50]="abc";  // try abc xyz, xyz abc ,mango x, mango apple, y y                        
    char str6[50]="abc";  // -ve, +ve, -ve, +ve, 0
    cout<<strcmp(str5,str6);
}