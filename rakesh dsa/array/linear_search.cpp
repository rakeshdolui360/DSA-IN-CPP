#include<iostream>
using namespace std;

int linearsearch(int * arr,int n,int key){
    for(int i=0;i<=n-1;i++){
        if(arr[i]==key){
            return i;
        }
    } 
    return -1; 
}

int main(){
 
    int n;
    cout<<"enter length of array " ;
    cin>>n;
    
    int arr[n];
    cout<<"enter 10 at any position of array"<<endl;
    cout<<"enter elements of array : "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    cout<<"10 is found at idx "<<linearsearch(arr,n,10);






    return 0;
}