#include<iostream>
using namespace std;

void printarr(int * ptr,int n){
    for(int i=0;i<=n-1;i++){
        // cout<< ptr<<" ";
        // ptr=ptr+1;  //ptr=ptr+1  ptr=ptr+4 byte (as pointer is int type ) 
        cout<<(ptr+i)<<" ";

        //try this
        // cout<<* ptr<<" ";
        // ptr=ptr+1;   

        // cout<<*(ptr+i)<<" ";

    }
    cout<<endl;

}
int main(){

    //pointer arithmetic

    //increment & decrement operator
    int a=10;
    int * aptr=&a;
    cout<<aptr<<endl;
    aptr++;           //aptr=aptr+1  aptr=aptr+4 byte (as pointer is int type )  
    cout<<aptr<<endl;
    aptr--;            //aptr=aptr-1  aptr=aptr-4 byte (as pointer is int type ) 
    cout<<aptr<<endl;

    //addition and subtraction of constant
    int b=5;
    int * bptr=&b;
    cout<<bptr<<endl;
    bptr=bptr+3;       //bptr=bptr+3  bptr=bptr+3*4 byte  bptr=bptr+12 byte  (as pointer is int type ) 
    cout<<bptr<<endl;
    cout<<bptr-3<<endl; //bptr=bptr-3  bptr=bptr-3*4 byte  bptr=bptr-12 byte  (as pointer is int type ) 

    int arr[]={15,22,35,44,65};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);


    //addition and subtraction of pointers
    int c=5;
    int * cptr1=&c;
    int * cptr2=cptr1+3;
    cout<<cptr1<<endl;
    cout<<cptr2<<endl;
    cout<<cptr2-cptr1<<endl;//in case of subtraction of pointers ,both should be of same type
    // cout<<cptr2+cptr1<<endl; //addition of pointers are invalid
    
    int arra[20]={1,2,3,4,5};
    int * ptr1=arra;
    int * ptr2=ptr1+3;
    cout<<ptr2-ptr1<<endl;
    cout<<* ptr1<<endl;
    cout<<* ptr2<<endl;

    //comparison
    cout<<(ptr2>ptr1)<<endl;
    cout<<(ptr1==arra)<<endl;

    return 0;
}