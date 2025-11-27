#include<iostream>
using namespace std;

void maxprofit(int * price,int n){
    int bestbuy[100000]; //int bestbuy[n] 
    bestbuy[0]=INT32_MAX;
    for(int i=1;i<=n-1;i++){
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
    }

    int maxprofit=0;
    for(int i=0;i<=n-1;i++){
        int currprofit=price[i]-bestbuy[i];
        maxprofit=max(maxprofit,currprofit);
    }

    cout<<"maximum profit is ="<<maxprofit;



}

int main(){
    int price[6]={7,1,5,3,6,4};
    int n=sizeof(price)/sizeof(int);
    maxprofit(price,n);
    //1<=price.length<=100000
    //0<=price[i]<=10000
    return 0;
}