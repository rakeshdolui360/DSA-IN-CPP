#include<iostream>
using namespace std;

void checkpowerof2(int num){
     num=num&(num-1);
    if(!(num)){                  
        cout<<" power of 2"<<endl;
    }
    else{
        cout<<" not power of 2"<<endl;
    }



}

int main(){
checkpowerof2(4);

}