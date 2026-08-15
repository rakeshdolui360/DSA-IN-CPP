#include<iostream>
using namespace std;



void print(int *arr,int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//insertion sort
//time complexity for insertion sort is o(n^2)
void insertionsort(int *arr,int n){
    for(int i=1;i<=n-1;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
}




void print(char *ch,int n){
    for(int i=0;i<=n-1;i++){
        cout<<ch[i]<<" , ";
    }
    cout<<endl;
}
void insertionsort(char *ch,int n){
    for(int i=1;i<=n-1;i++){
        int curr=ch[i];
        int prev=i-1;
        while(prev>=0 && ch[prev]>curr){
            swap(ch[prev],ch[prev+1]);
            prev--;
        }
        ch[prev+1]=curr;
    }
    print(ch,n);
}




int main(){   
    // int arr[5]={5,1,4,3,2};
    int arr[5]={1,2,3,5,4};
    // int arr[5]={5,4,3,2,1};

    insertionsort(arr,5);


    char ch[6]={'f','b','a','e','c','d'};
    insertionsort(ch,6);


    return 0;
}