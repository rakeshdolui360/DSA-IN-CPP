#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix={{1,2,3},
                                {4,5,6},
                                {7,8,9}};  // vector that stores vector, here each row act as individual vector

    for(int i=0;i<=matrix.size()-1;i++){    // matrix.size() == row number =>3
        for(int j=0;j<=matrix[i].size()-1;j++){  //matrix[i].size()==cols number of ith row
            cout<<matrix[i][j]<<" ";

        }
        cout<<endl;
    }                            

  //in  2d array colum number same for each row ,                                                                       
  // but in 2d vector  colum number can be different for each row
  //vector<vector<int>> matrix={{1,2,3},
//                               {4,5,},
//                               {7}}; 
// 
}