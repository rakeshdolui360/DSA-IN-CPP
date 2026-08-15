#include<iostream>
#include<climits>
using namespace std;
void countingsort(int *arr,int n){
    int freqarr[10000]={0};
    int minval=INT_MAX,maxval=INT_MIN;

    //freqarr build
    for( int i=0; i<=n-1; i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);

        freqarr[arr[i]]++;

    }


    //sorted array built
    int j=0;
    for(int i=minval;i<=maxval;i++){
        while(freqarr[i]>0){
            arr[j++]=i;
            freqarr[i]--;
        }
    }





}

void printarr(int *arr ,int n){
    for( int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){

    int arr[]={1,4,1,3,2,4,3,7,2,2};
    int n=sizeof(arr)/sizeof(int);
    countingsort(arr,n);
    printarr(arr,n);
   
    
    return 0;
}