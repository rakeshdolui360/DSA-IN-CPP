#include<iostream>
using namespace std;
void print(int *arr,int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



//selection sort
//time complexity for selection sort is o(n^2)
void selectionsort(int *arr,int n){
    for(int i=0;i<=n-2;i++){

        int minidx=i;
        for(int j=i+1;j<=n-1;j++){
            if( arr[j]<arr[minidx]){
                minidx=j;
            }
           
        }
         swap(arr[i],arr[minidx]);


    }
    print(arr,n);
}



int main(){   
    // int arr[5]={5,1,4,3,2};

    // int arr[5]={1,2,3,5,4};
    int arr[5]={5,4,3,2,1};


    selectionsort(arr,5);

    return 0;
}