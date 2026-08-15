#include<iostream>
using namespace std;

void print(int *arr,int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



//bubble sort
//time complexity for bubble sort is o(n^2)
void bubblesort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-i-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);//ascending , descending

}





//bubble sort(slightly optimized)
//time complexity for bubble sort is o(n)
void bubblesort2(int arr2[],int n){
    //outer loop
    for(int i=0;i<=n-2;i++){


        bool isSwap=false;
        //inner loop
        for(int j=0;j<=n-i-2;j++){
            if(arr2[j]>arr2[j+1]){
                swap(arr2[j],arr2[j+1]);
                isSwap=true;
            }         
        }

        if(isSwap==false){
            break;

        }  


    }
    print(arr2,n);
}






int main(){   
    int arr[5]={5,1,4,3,2};

    int arr2[5]={5,1,4,3,2};
    // int arr2[5]={1,2,3,5,4}; /outer loop 2 times
    // int arr2[5]={1,2,3,4,5};
    // int arr2[5]={5,4,3,2,1};


    bubblesort(arr,5);
    bubblesort2(arr2,5);

    return 0;
}