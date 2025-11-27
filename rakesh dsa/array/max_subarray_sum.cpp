#include<iostream>
using namespace std;

//brute force approach
//time complexity is o(n^3)
void maxsubarraysum(int *arr,int n){
    int maxsubarr=INT32_MIN;
    int minsubarr=INT32_MAX;

    for(int start=0;start<=n-1;start++){
        for(int end=start;end<=n-1;end++){
            int currsum=0;
            for(int i=start;i<=end;i++){
                currsum=currsum+arr[i];
            }
            cout<<currsum<<" ";
            maxsubarr=max(maxsubarr,currsum);
            minsubarr=min(minsubarr,currsum);

        }
        cout<<endl;
    }
    cout<<" MAXIMUM SUBARRAY SUM IS = "<< maxsubarr<<endl;
    cout<<" MINIMUM SUBARRAY SUM IS = "<< minsubarr<<endl;

}

//brute force approach(slightly optimized)
//time complexity is o(n^2)
void maxsubarraysum1(int *arr,int n){
    int maxsubarr=INT32_MIN;
    int minsubarr=INT32_MAX;
    for(int start=0;start<=n-1;start++){
        int currsum=0;
        for(int end=start; end<=n-1;end++){
            currsum=currsum+arr[end];
            cout<<currsum<<" ";
            maxsubarr=max(maxsubarr,currsum);
            minsubarr=min(minsubarr,currsum);            

        }
        cout<<endl;
    }
    cout<<" MAXIMUM SUBARRAY SUM IS = "<< maxsubarr<<endl;
    cout<<" MINIMUM SUBARRAY SUM IS = "<< minsubarr<<endl;

}


//kadane's algorithm (dynamic programming)
//time complexity is o(n)
void maxsubarraysum2(int *arr,int n){
    int maxsubarr=INT32_MIN;
    int currsum=0;
    for(int i=0;i<=n-1;i++){
        currsum=currsum+arr[i];
         maxsubarr=max(maxsubarr,currsum);
         if(currsum<0){
            currsum=0;
         }               
    }
    cout<<" MAXIMUM SUBARRAY SUM IS = "<< maxsubarr<<endl;

}


int main(){
    // int arr[6]={2,-3,6,-5,4,2};
    int arr[4]={-3,-2,-1,-4};

    int n=sizeof(arr)/sizeof(int);
    maxsubarraysum(arr,n);
    maxsubarraysum1(arr,n);
    maxsubarraysum2(arr,n);
    //in case of kadane's algorithm try arr[4]={-3,-2,-1,-4}

    return 0;
}