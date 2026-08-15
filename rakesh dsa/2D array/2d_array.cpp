#include<iostream>
using namespace std;

int main(){
    //creating an 2d array
    //2d array is represented as a contiguos block of memory cell (linearly)
    //row major  100 100  65 96  76 34
    //column major 100 65 76  100 96 34
    
    int marks[3][2]={ {100,100},
                      {65,96},
                      {76,34}   };

    int mark[3][3]={ {100,100,56},{65,9,76},{76,34,78}};

    cout<<marks[1][0]<<endl;
    cout<<marks[1][1]<<endl;
    cout<<marks[2][1]<<endl;
    cout<<marks[0][0]<<endl;

    cout<<mark[1][0]<<endl;
    cout<<mark[1][2]<<endl;
    cout<<mark[2][1]<<endl;
    cout<<mark[0][2]<<endl; 
    //2d array is represented as a "contiguos" block of memory cell "(linearly)"
    //row major  100 100  65 96  76 34
    //column major 100 65 76  100 96 34
           
    return 0;
}