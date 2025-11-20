#include<iostream>
using namespace std;
int main(){
 
    int n;
    cout<<" enter length of array " ;
    cin>>n;
    
    int arr[n];
    cout<<"enter elements of array : "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    //largest element 
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<" largest element of given array is "<<max<<endl;


    //smallest element
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<" smallest element of given array is "<<min<<endl;


    return 0;
}