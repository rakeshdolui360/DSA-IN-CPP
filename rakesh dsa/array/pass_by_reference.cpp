#include<iostream>
using namespace std;
void func(int * arr){
    arr[0]=1000;

}
void func2(int arr[]){
    arr[0]=2000;

}

//print array
void printarr(int ptr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<ptr[i]<<" ";
        }
    }     



int main(){
    int a=5;
    int * ptr=&a;
    cout<<ptr<<endl;

    int arr[]={15,52,35,44,65};
    int n=sizeof(arr)/sizeof(int);
    cout<<arr<<endl;

    cout<<*arr<<endl;    //cout<<arr[0];
    cout<<*(arr+1)<<endl;//cout<<arr[1];
    cout<<*(arr+2)<<endl;//cout<<arr[2];
    cout<<*(arr+3)<<endl;//cout<<arr[3];

    func(arr);
    cout<<"updated '0' th idx is= "<<arr[0]<<endl;

    func2(arr);
    cout<<"updated '0' th idx is= "<<arr[0]<<endl;


    printarr(arr,n);
    //array are passed by reference
    //void func(int * arr) , void func(int  arr[]) is same
    //func(arr) here array name is passing as pointer





    return 0;
}