#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool ispal(int a){
        int x=a,rem=0,res=0;
        while(x>0){
            rem=x%10;
            res=res*10+rem;
            x/=10;
        }
        if(res==a)
        return true;
        return false;
    }
    int PalinArray(int a[], int n)
    {
        // code here
        int count =1;
        for(int i=0;i<n;i++){
            if(ispal(a[i])==false)count=0;
        }
        if(count==1)return 1;
        else return 0;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.PalinArray(a,n)<<endl;
    }
}