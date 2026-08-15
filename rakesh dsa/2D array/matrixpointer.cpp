#include<iostream>
using namespace std;

void matrixpointer(int mark[][3],int n,int m){
    //row represent
    cout<<*(mark)<<endl;// oth row represent
    cout<<*(mark+1)<<endl;// 1st row  repesent
    cout<<*(mark+2)<<endl;// 2nd row  represent




    // They don't directly represent an individual value.
    //  They represent a row (array of 3 integers),
    //   which in an expression like cout converts to a pointer to that row's first element.


}

void matrixpointer2(int (*mark)[3],int n,int m){

    //matrix element or exact value
    cout<<mark[1][2]<<endl;
    cout<<*(*(mark+1)+2)<<endl;
    cout<<mark[2][2]<<endl;
    cout<<*(*(mark+2)+2)<<endl;
        
}
int main(){

    int mark[3][3]={ {100,100,56},
                     {65,9,76},
                     {76,34,78}};

    //row pointer 
    cout<<mark<<endl;// oth row address
    cout<<mark+1<<endl;// 1st row address
    cout<<mark+2<<endl;// 2nd row address





    matrixpointer(mark,3,3);
    matrixpointer2(mark,3,3);




// mark gives the row address, while *(mark) gives the full row, 
// it becomes the starting/first-element address.
// That's why both print the same address.




//  cout << mark → address of first row
// cout << *mark → first row, but cout converts it to the address of its first element
// cout << **mark → first element's value


           
    return 0;
}