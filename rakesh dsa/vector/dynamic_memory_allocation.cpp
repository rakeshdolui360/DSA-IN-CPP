#include<iostream>
using namespace std;

void dynamicarray(int size){

    int *arr=new int[size];   // dynamic array memory allocation using new operator in heap memory


    int x=1;  // value assign
    for(int i=0;i<=size-1;i++){
        arr[i]=x;
        x++;
    }

    cout<<arr[0]<<endl;
    cout<<*(arr)<<endl;    // memory access using arr pointer
    cout<<arr[1]<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;


    delete[] arr;    // to avoid memory leak heap memory is deleted explicitly
     

}

void dynamic(int size){

    int *ptr=new int;   // dynamic integer memory allocation using new operator in heap memory


    *ptr=5;  // value assign


    cout<<*ptr<<endl;    // memory access using arr pointer


    delete ptr;    // to avoid memory leak heap memory is deleted explicitly


}
int* dynamic1(int size){

    int *ptr=new int;   // dynamic integer memory allocation using new operator in heap memory


    *ptr=1200;  // value assign


    cout<<*ptr<<endl;    // memory access using arr pointer


    return ptr;

}
int main(){
    // dynamic array memory allocation 
    int size;
    cout<<"enter the dynamic size of array ";
    cin>>size;
    dynamicarray(size);
    dynamic(size);

    int *x=dynamic1(size);
    cout<<*x<<endl;



}