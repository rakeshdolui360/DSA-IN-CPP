#include<iostream>
using namespace std;
void printsubarray(int *arr,int n){
    for(int start=0;start<=n-1;start++){
        for(int end=start;end<=n-1;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

}
//time complexity is o(n^3)


int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    printsubarray(arr,n);

    return 0;
}