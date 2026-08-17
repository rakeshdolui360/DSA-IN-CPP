#include<iostream>
#include<cstring>
using namespace std;
void reverseword( char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(word[st],word[end]);          // T.C > O(n)
        st++;                             
        end--;
            
        }

    cout<<"reverse word is  "<<word<<endl;
    }



int main(){

char word[]="rakesh";
reverseword(word,strlen(word));





}