//C++ Program to find possible permutations using recursion.
//time complexity= n!*n
//space complexity = O(1)
class solution{
public:
    void findpermutations(int index,Vector<int> &arr,vector<vector<int>> &ans){
       if(index==arr.size()){
         ans.push_back(arr);
         return;
       }
       for(int i=index;i<arr.size();i++){
          swap(arr[index],arr[i]);
          findpermutations(ind+1,arr,ans);
          swap(arr[index],arr[i]);
       }
    }
  vector<vector<int>> permute(vector<int> &nums){
       vector<vector<int>> ans;
       findpermutations(0,nums,ans);
      return ans;
  }
};
   
