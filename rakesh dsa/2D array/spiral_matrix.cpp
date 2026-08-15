#include<iostream>
using namespace std;
void spiralmatrix(int mat[][4],int n,int m){
    int srow=0,erow=n-1;
    int scol=0,ecol=m-1;
    while(srow<=erow && scol<=ecol){//stopping condition-- to avoid overap "<" (even case) ,to print middle line "="(odd case)
    //top border
    for(int j=scol;j<=ecol;j++){
        cout<<mat[srow][j]<<" ";
    }
    //right border
    for(int i=srow+1;i<=erow;i++){
        cout<<mat[i][ecol]<<" ";
    }
    //bottom border
    for(int j=ecol-1;j>=scol;j--){
        if(srow==erow){//to avoid repeatation
            break;
        }
        cout<<mat[erow][j]<<" ";
    }
    //left border    
    for(int i=erow-1;i>=srow+1;i--){
        if(scol==ecol){//to avoid repeatation
            break;
        }
        cout<<mat[i][scol]<<" ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
    }
    cout<<endl;

}

int main(){
  int arr[4][4]={ {1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12}, 
                  {13,14,15,16}  };
  int arr2[3][4]={ {1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12}  };                  
   

   spiralmatrix(arr,4,4);
   spiralmatrix(arr2,3,4);

   //spiral matrix code can be applicable on any n*m matrix               

 
    return 0;
}