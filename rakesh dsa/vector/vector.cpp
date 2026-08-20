#include<iostream>
#include<vector>
using namespace std;


int main(){
    // vector behave as dynamic array ,but allocation,delocation of memory is automaticaly included into stl
    //vector is also called as  sequence container
    //vector is stored in contiguous memory
    vector<int>vec;
    vector<int>vec1(5,-1);    //vec1(size,initialisation)is called as fill constructor,   vector is class and vec1 is object
    vector<int>vec2={1,2,3,4};

    cout<<vec.size()<<endl;
    cout<<vec1.size()<<endl;  // size of vector
    cout<<vec2.size()<<endl;

    // cout<<vec[0]<<endl;       // not executing after it
    cout<<vec1[0]<<endl;
    cout<<vec2[0]<<endl;                // value find 
    for(int i=0;i<=vec2.size()-1;i++){
        cout<<vec2[i]<<endl;
    }

    //vector memory allocation
    vector<int>vec3={1,2,3,4};
    cout<<vec3.size()<<endl;
    cout<<vec3.capacity()<<endl;  

    vec3.push_back(5);   // add new element at end
    cout<<vec3.size()<<endl;      //5
    cout<<vec3.capacity()<<endl;  //8

    vec3.pop_back();    // pop element from end
    cout<<vec3.size()<<endl;     //4
    cout<<vec3.capacity()<<endl; //8



    //vector memory allocation
    cout<<vec.size()<<endl;   //0
    cout<<vec.capacity()<<endl; //0 

    vec.push_back(5);   // add new element at end
    cout<<vec.size()<<endl;      //1
    cout<<vec.capacity()<<endl;  //1

    vec.push_back(5);   // add new element at end
    cout<<vec.size()<<endl;      //2
    cout<<vec.capacity()<<endl;  //2

    vec.push_back(5);   // add new element at end
    cout<<vec.size()<<endl;      //3
    cout<<vec.capacity()<<endl;  //4

    vec.pop_back();    // pop element from end
    cout<<vec.size()<<endl;     //2
    cout<<vec.capacity()<<endl; //4

}