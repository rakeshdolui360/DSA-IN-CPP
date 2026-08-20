#include<iostream>
using namespace std;

void clearlastithbit(int num,int i){
     num=(num&(~0<<i));
    cout<<" after clearing last  "<<i<<"th bit,final result is "<<num<<endl;

}

int main(){
clearlastithbit(15,2);

}