#include<bits/stdc++.h>
using namespace std;



typedef long long ll;


// Bruteforce | O(n^4) time | O(n) space
class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        for (int i =0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                for (int k = j + 1; k < n - 1; k++) {
                    for (int t = k + 1; t < n; t++) {
                        if ((ll)nums[i] + nums[j] + nums[k] + nums[t] == (ll)target) {
                            vector<int> quad = {nums[i], nums[j], nums[k], nums[t]};
                            st.insert(quad);
                        }
                    }
                }
            }
        }
        vector<vector<int>> res(st.begin(), st.end());
        return res;
    }
};


// Bruteforce | O(n^4) time | O(1) space
class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i =0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                for (int k = j + 1; k < n - 1; k++) {
                    for (int t = k + 1; t < n; t++) {
                        if ((ll)nums[i] + nums[j] + nums[k] + nums[t] == (ll)target) {
                            vector<int> quad = {nums[i], nums[j], nums[k], nums[t]};
                            res.push_back(quad);
                        }
                        while (t < n - 1 && nums[t] == nums[t + 1]) t++;
                    }
                    while (k < n - 1 && nums[k] == nums[k + 1]) k++;
                }
                while (j < n - 1 && nums[j] == nums[j + 1]) j++;
            }
            while (i < n - 1 && nums[i] == nums[i + 1]) i++;
        }
        return res;
    }
};



// Optimal | O(n^3 * log(n)) time | O(1) space
class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                for (int k = j + 1; k < n - 1; k++) {
                    ll sumOfThree = (ll)nums[i] + (ll)nums[j] + (ll)nums[k];
                    int fourthNum = target - sumOfThree;
                    if (binary_search(nums.begin() + k + 1, nums.end(), fourthNum)) {
                        vector<int> quad = {nums[i], nums[j], nums[k], fourthNum};
                        res.push_back(quad);
                    }
                    while (k < n - 1 && nums[k] == nums[k + 1]) k++;
                }
                while (j < n - 1 && nums[j] == nums[j + 1]) j++;
            }
            while (i < n - 1 && nums[i] == nums[i + 1]) i++;
        }
        return res;
    }
};



// Most Optimal | O(n^3) time | O(1) space
class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                int l = j + 1, r = n - 1;
                ll remSum = (ll)target - (ll)nums[i] - (ll)nums[j];
                while (l < r) {
                    ll sumOfLastTwo = nums[l] + nums[r];
                    if (sumOfLastTwo < remSum) l++;
                    else if (sumOfLastTwo > remSum) r--;
                    else {
                        vector<int> quad = {nums[i], nums[j], nums[l], nums[r]};
                        res.push_back(quad);
                        while (l < r && nums[l] == quad[2]) l++;
                        while (l < r && nums[r] == quad[3]) r--;
                    }
                }
                while (j < n - 1 && nums[j] == nums[j + 1]) j++;
            }
            while (i < n - 1 && nums[i] == nums[i + 1]) i++;
        }
        return res;
    }
};
