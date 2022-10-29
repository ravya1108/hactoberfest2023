#include <iostream>
using namespace std;
bool isvalid(int a[],int n,int m,int min)
{
    int isstudentreq=1;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]>min)
        {
            return false;
        }
        if(a[i]+sum>min)
        {
            isstudentreq++;
            sum=a[i];
            if(isstudentreq>m)
            {
                return false;
            }
        }
        else
        {
            sum+=a[i];
        }
    }
    return true;
}
int allocatebook(int a[],int n,int m)
{
    if(n<m)
    {
        return -1;
    }
    int end=0;
    for(int i=0;i<n;i++)
    {
        end+=a[i];
    }
    int start=0;
    int ans=INT_MAX;
    int mid=0;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(isvalid(a,n,m,mid))
        {
            ans=min(ans,mid);
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    int a[]={12,34,67,90};
      cout<<allocatebook(a,4,2);
}