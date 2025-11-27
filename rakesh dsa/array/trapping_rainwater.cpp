#include<iostream>
using namespace std;

int trapwater(int *height,int n){
    //leftmax array
    int leftmax[20000]; //int leftmax[n]
    leftmax[0]=height[0]; //leftmax[0]=INT_MIN
    for(int i=1;i<=n-1;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);

    }

    //rightmax array
    int rightmax[20000]; //int rightmax[n]
    rightmax[n-1]=height[n-1]; //rightmax[n-1]=INT_MIN
    for(int i=n-2;i>=1;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);

    }
    //trap water
    int totalwater=0;
    for(int i=0;i<=n-1;i++){
        int currwater=(min(leftmax[i],rightmax[i])-height[i])*1 ;//*width
        if(currwater>0){
        totalwater=totalwater+currwater;
        }

    }  
    return totalwater;  
}
//time complexity o(n^3)
int main(){
    int height[7]={4,2,0,6,3,2,5};
    // int height[7]={7,6,5,4,3,2,1};

    int n=sizeof(height)/sizeof(int);
    cout<<"total trap water is = "<<trapwater(height,n);
    return 0;

}