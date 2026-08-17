#include<iostream>
#include<cstring>
using namespace std;


void uppercase(char word[],int n){
    for(int i=0;i<=n-1;i++){
        char ch =word[i];
        if('A'<=ch && ch<='Z'){
            continue;
        }
        else{
            word[i]=ch-'a'+'A';
        }
    }
cout<< "word in uppercase is "<< word <<endl;

}

void lowercase(char word[],int n){
    for(int i=0;i<=n-1;i++){
        char ch =word[i];
        if('a'<=ch && ch<='z'){
            continue;
        }
        else{
            word[i]=ch-'A'+'a';
        }
    }
cout<< "word in lowercase is "<< word <<endl;

}

int main(){
char word[]="ApPle";
uppercase(word,strlen(word));
lowercase(word,strlen(word));


}