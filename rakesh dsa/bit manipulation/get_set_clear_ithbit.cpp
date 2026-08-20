#include<iostream>
using namespace std;
void oddevencheck(int num){
     num=num&1;
    if(!(num)){                  //(num&1)==0  !(num&1)
        cout<<" even  number"<<endl;
    }
    else{
        cout<<" odd number"<<endl;
    }


}
void getithbit(int num,int i){
     num=(num&(1<<i));
    if(!(num)){                  
        cout<<i<< "th bit is 0 "<<endl;
    }
    else{
        cout<<i<< "th bit is 1 "<<endl;
    }

}
void setithbit(int num,int i){
     num=(num|(1<<i));
    cout<<" after setting "<<i<<"th bit,final result is "<<num<<endl;

}
void clearithbit(int num,int i){
     num=(num&(~(1<<i)));
    cout<<" after clearing "<<i<<"th bit,final result is "<<num<<endl;

}
int main(){
oddevencheck(5);
oddevencheck(8);

getithbit(6,2);
setithbit(6,3);
clearithbit(6,1);


}