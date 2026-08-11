#include<iostream>
using namespace std;

int binarysearch(int * arr,int n,int key){
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }

    }

    return -1; 
}

int main(){
    //binary serach is applicable for sorted array only

    int arr[]={15,22,35,44,65};
    int n=sizeof(arr)/sizeof(int);
    cout<<"key is found at idx "<<binarysearch(arr,n,44);






    return 0;
}