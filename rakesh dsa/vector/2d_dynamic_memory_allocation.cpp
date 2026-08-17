#include<iostream>
using namespace std;


int main(){
int rows,cols;
cout<<" enter row number ";
cin>>rows;
cout<<" enter cols number ";
cin>>cols;

int **matrix=new int*[rows];  // dynamic pointer array memory allocation
for(int i=0;i<=rows-1;i++){
    matrix[i]=new int[cols];  // dynamic integer array memory allocation
}

int x=1;
for(int i=0;i<=rows-1;i++){
    for(int j=0;j<=cols-1;j++){    // value assign 
        matrix[i][j]=x++;
    }
}

    cout<<matrix[2][2]<<endl;
    cout<<*(*(matrix+2)+2)<<endl;

    delete[] matrix;   // to avoid memory leak heap memory is deleted explicitly



}