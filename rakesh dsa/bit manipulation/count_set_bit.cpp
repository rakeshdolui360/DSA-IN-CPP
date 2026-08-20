#include<iostream>
using namespace std;

void countsetbit(int num){
    int count=0;
    while(num>0){
        int lastdigit=num&1;
        count=count+lastdigit;
        num=num>>1;   //important step
    }
    cout<<" count of set bit "<<count<<endl;

}

int main(){
countsetbit(10);    

}