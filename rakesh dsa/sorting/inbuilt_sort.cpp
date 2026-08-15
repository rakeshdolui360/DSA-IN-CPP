#include<iostream>
using namespace std;
void print(int *arr,int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[6]={4,6,2,6,5,0};
    //ascending sort
    // sort(arr,arr+6);
    print(arr,6);

    //descending sort
    // sort(arr,arr+6,greater<int>());
    print(arr,6);    
    
    return 0;
}