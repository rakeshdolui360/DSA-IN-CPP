#include<iostream>
using namespace std;
int main(){
    //array is a "linear" collection of "same data type" 
    //that are stored together in " contiguos" memory spaces
    //memory is "statically" allocated at "compile" time, not in run time

    //creating an array

    int arr[10];
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<"this all are gurbage value"<<endl;

    // cout<<arr[10]<<endl;
    // cout<<arr[20]<<endl;
    //it will generate error ,as index range is from " 0 "to array "length -1"



    int marks[10]={1,2,3,4,5};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl; 
    cout<<marks[5]<<endl; 
    cout<<marks[6]<<endl; 
    cout<<marks[7]<<endl; 
    cout<<marks[8]<<endl; 
    cout<<marks[9]<<endl; 


    // cout<<marks[10]<<endl; 
    // cout<<marks[20]<<endl; 
    //it will generate error ,as index range is from " 0 "to array "length -1"



    int mark[]={1,2,3,4,5};
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;
    cout<<mark[4]<<endl;
    
    
    // cout<<marks[5]<<endl; 
    // cout<<marks[6]<<endl; 
    //it will generate error
       
    

    return 0;
}