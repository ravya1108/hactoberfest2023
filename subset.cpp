#include <iostream>
#include <vector>
using namespace std;

void subsets(vector<vector<int>> &ans, vector<int> &temp, vector<int> &nums, int i){
    if (i>=nums.size()){
        ans.push_back(temp);
        return;
    }
    subsets(ans,temp,nums,i+1);
    temp.push_back(nums[i]);

    subsets(ans,temp,nums,i+1);
    temp.pop_back();
    return;
}

int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> ans;
    vector<int> temp;
    subsets(ans,temp,nums,0);

    for (auto x : ans)
    {
        if(x.size()>0)
        cout<<"[";
        for (auto y : x)
        {
            if(y==x[x.size()-1])
            cout << y <<"]";
            else
            cout << y <<", "; 
        }
        cout << endl;
    }
}