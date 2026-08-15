#include<iostream>
using namespace std;

//time complexity o(n^2)
void diagonalsum(int mat[][4],int n,int m){
    int sum=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            //primary diagonal
            if(j==i){
                sum=sum+mat[i][j];
            }
            //secondary diagonal
            else if(j==n-1-i){
                sum=sum+mat[i][j];
               
            }
            
        }

    }
    cout<<" diagonal sum is= "<<sum<<endl;

}


// //time complexity o(n)
void diagonalsum2(int mat[][3],int n,int m){
    int sum=0;
    for(int i=0;i<=n-1;i++){
        //primary diagonal
        sum=sum+mat[i][i];
        //secondary diagonal
        if(i!=n-1-i){
        sum=sum+mat[i][n-1-i];
        }
  
            
        }

    
    cout<<" diagonal sum is= "<<sum<<endl;

}
int main(){
  int arr[4][4]={ {1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12}, 
                  {13,14,15,16}  };
  int arr2[3][3]={ {1,2,3,},
                   {4,5,6,},
                   {7,8,9,}  };                  
   

   diagonalsum(arr,4,4);
   diagonalsum2(arr2,3,3);

    


 
    return 0;
}