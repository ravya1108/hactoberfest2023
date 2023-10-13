#include<bits/stdc++.h>
using namespace std;




int solve(vector<int> &nums){

  

   

    unordered_map<int , int> table;


    for(int i=0;i<nums.size();i++){
        if(table.find(nums[i]) == table.end()){
            table.insert(make_pair(nums[i] , 1));
        }
        else{
            table[nums[i]]++;
        }
    }

    int max = INT_MIN;

    int ans =0;

    
    for (auto& it : table) {
        if(it.second > max){
            max = it.second;
            ans = it.first;
        }
    }

    return ans;


    
}

int main(){

        vector<int> nums = {3,2,3};

        cout<<solve(nums);
}
