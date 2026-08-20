#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>vec,int target){
    int st=0,end=vec.size()-1;
    vector<int>ans;
    int currsum;
    while(st<end){
        currsum=vec[st]+vec[end];
        if(currsum==target){
            // cout<<" sum pair is ="<<vec[st]<<", "<<vec[end]<<endl;
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(currsum>target){
            end--;
        }
        else{
            st++;
        }
    }
    return ans;


}


int main(){
    //find target pair sum in a sorted vector

    vector<int>vec={2,7,11,14};
    vector<int> answer=pairsum(vec,9);
     cout<<" sum pair is ="<<answer[0]<<", "<<answer[1]<<endl;
   
// After the function finishes, the local variable ans goes out of scope.

// But the returned vector has been received by answer.

// So answer remains available in main().


}