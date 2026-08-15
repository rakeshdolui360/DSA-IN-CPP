#include<iostream>
using namespace std;

int main(){
  int arr[3][4];
  int n=3,m=4;

//taking input of  2d array
  cout<<"enter the elements of array : ";
  for(int i=0;i<=n-1;i++){
    for(int j=0;j<=m-1;j++){
        cin>>arr[i][j];
    }
  }
//output of 2d array
  for(int i=0;i<=n-1;i++){
    for(int j=0;j<=m-1;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  } 
    


 
    return 0;
}
