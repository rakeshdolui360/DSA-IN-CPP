#include<iostream>
using namespace std;
int main(){
 

    //calculating length of array 
    int arr[]={1,2,3,4,5};
    cout<<"sizeof(arr) is = "<<sizeof(arr)<<" byte "<<endl;
    int length=sizeof(arr)/sizeof(int); //20 bytes/4 bytes 
    cout<<"length of arr is ="<<length<<endl;


    //taking input of array
    int n;
    cout<<" enter length of array " ;
    cin>>n;
    
    int marks[n];
    cout<<"enter elements of array : "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    cout<<"elements of array are: "<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<marks[i] <<" , ";
    }
    
    

    

    return 0;
}