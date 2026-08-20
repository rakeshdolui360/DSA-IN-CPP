#include<iostream>
using namespace std;
void oddevencheck(int num){
    if(!(num&1)){                  //(num&1)==0  !(num&1)
        cout<<" even  number"<<endl;
    }
    else{
        cout<<" odd number"<<endl;
    }


}
int main(){
oddevencheck(5);
oddevencheck(8);

}