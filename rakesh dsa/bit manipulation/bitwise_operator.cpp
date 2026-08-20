#include<iostream>
using namespace std;
int main(){
    //bitwise operator
    cout<<(3&5)<<endl;  //bitwise and     both input 1 then only output 1
    cout<<(3|5)<<endl;  //bitwise or     any input 1 then output is 1 
    cout<<(3^5)<<endl;  // bitwise xor     different input 1 then output is 1

    //binary not operator 
    cout<<(~6)<<endl;   // 1's complement  and 2's complement concepts are used
    cout<<(~0)<<endl;   // if 0 is binary bit then ~0 ==1 but for decimal 0 answer is -1

    //bitwise shift operator
    //left shift
    cout<<(7<<2)<<endl; //(num<<position)  => n* 2^a

    //right shift  
    cout<<(7>>2)<<endl; //(num>>position)   => n/2^a
    cout<<(8>>1)<<endl;

}