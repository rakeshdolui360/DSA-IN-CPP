#include<iostream>
#include<cstring>
using namespace std;
bool palindromecheck( char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(word[st]!=word[end]){
            cout<<"not a palindrome"<<endl;  // T.C > O(n)
            return false ;

        } 
        st++;
        end--;
            
        }
     cout<<"word is a palindrome"<<endl;
     return true;
       

    }



int main(){

char word[]="racecar";
palindromecheck(word,strlen(word));





}