#include<iostream>
using namespace std;

void bruteforce(int mat[][4],int n,int m,int key){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if (mat[i][j]==key){
                cout<<"key is found at "<< i  <<" "<< j  <<endl;
            }

        }
    }                                // t.c. =0(n*m)

}



bool binarysearch(int mat[][4],int n,int m,int key){
    //binary search on each row
  
    for(int i=0;i<=n-1;i++){
        int st=0, end=m-1;
        while (st<=end){
            int mid=(st+end)/2;
            if (mat[i][mid]==key){
                cout<<"key is found at"<< i <<" " << mid <<endl;
                return true;
            }
            else if(mat[i][mid]<key){
                st=mid+1;
            }
             else{                            
                end=mid-1;                     // t.c. =0(nlogm)
            }      
        }

    }
     cout<<" element not found"<<endl;
     return false;  

    //binary search on each column
 
    // for(int j=0;j<=m-1;j++){
    //     int st=0, end=n-1;
    //     while (st<=end){
    //         int mid=(st+end)/2;
    //         if (mat[mid][j]==key){
    //             cout<<"key is found at"<< mid << j  <<endl;
    //             return true;
    //         }
    //         else if(mat[mid][j]<key){
    //             st=mid+1;
    //         }
    //         else{
    //             end=mid-1;
    //         }
    //     }                         
    // }                                                   // t.c. =0(mlogn)
    //  cout<<" element not found"<<endl;
    //  return false;  


}





bool   staircase(int mat[][4],int n,int m,int key){
        int i=0, j=m-1;
        while (i<=n-1 && j>=0 ){
            if (mat[i][j]==key){
                cout<<"key is found at  "<< i <<" " <<j  <<endl;
                return true  ;
            }
            else if(mat[i][j]>key){
                j--;
            }
            else{
                i++;
            }

        }                                                          //Maximum movements are approximately:n + m
        cout<<" key not found "<<endl;                            //t.c =0(n+m)
        return false;
    }    

    

int main(){
    int mat[4][4]={ {10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};

    staircase( mat,4,4,35);
    // staircase(mat,4,4,36);

    bruteforce( mat,4,4,35);
    binarysearch(mat,4,4,35);



    return 0;
}