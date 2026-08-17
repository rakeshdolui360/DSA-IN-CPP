#include<iostream>
using namespace std;
bool anagram(string str, string str2){                    //string size pass is not required as string is not pointer
    int count[26]={0};
    if(str.length()!=str2.length()){
        cout<<" not a valid anagram"<<endl;             // length checking
        return false;
    }
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;                       //count array idx value increment
    }
    for(int i=0;i<str2.length();i++){
        if(count[str2[i]-'a']==0){     // to check if that idx element is present or not in str and to check extra ellement of that idx is present or not in str2 
        cout<<" not a valid anagram"<<endl;
        return false;
        }
        count[str2[i]-'a']--;
    }
    cout<<" a valid anagram"<<endl;
    return true;    
}
int main(){
string str="anagram";
string str2="nagaram";

anagram(str,str2);
}