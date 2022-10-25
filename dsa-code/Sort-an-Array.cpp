class Solution {
public:
    void merge(vector<int>&nums,int s,int m,int e)
{
    int s1=s;
    int e1=m;
    int s2=m+1;
    int e2=e;
        int *arr=new int[e-s+1];
    int st=0;
    while(s1<=e1&&s2<=e2)
    {
        if(nums[s1]>nums[s2])
        {
            arr[st]=nums[s2];
            s2++;
            st++;
        }
        else
        {
            arr[st]=nums[s1];
            s1++;
            st++;
        }
    }
    while(s1<=e1)
    {
        arr[st]=nums[s1];
            s1++;
            st++;
    }
    while(s2<=e2)
    {
        arr[st]=nums[s2];
            s2++;
            st++;
    }
    for(int i=0;i<e-s+1;i++)
        nums[i+s]=arr[i];
}
    void mergeSort(vector<int>&nums,int s,int e)
    {
        if(s>=e)
            return;
        int mid=(s+e)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1,e);
        merge(nums,s,mid,e);
        
        
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
         
    }
};
