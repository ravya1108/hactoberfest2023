/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]]
such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // num[i]+num[j]+num[k]=0 will become num[i]+num[j]=-num[k]
        // will skip num[i]==num[i-1] bec due to same value ans will also be same

        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());



            for (int i = 0; i < n; ++i) {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = n - 1;

            while (j < k) {
                if ( nums[j] + nums[k] ==- nums[i]) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while (j < k && nums[j] == nums[j-1])
                        j++;
                }
                else if ( nums[j] + nums[k] < -nums[i])
                    j++;
                else
                    k--;
            }

         }
        return ans;

    }
};


int main()
{
  Solution S;
  vector<int>arr={-1,0,1,2,-1,-4};
  vector<vector<int>>ans(S.threeSum(arr));

  for(auto it:ans)
  {
    for(auto i:it) cout<<i<<" ";
    cout<<"\n";
  }
}
