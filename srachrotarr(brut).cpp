#include<bits/stdc++.h>
using namespace std;
int srchrotarr(int arr[],int n,int target){
 int start=0,end=n-1;
        int mid=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target)
                return mid;
            if(arr[start]<=arr[mid] && arr[mid]>=arr[end]){
                if(arr[start]<=target && target<=arr[mid])  
                    end=mid-1;
                else start=mid+1;
            }
            else if(arr[start]>=arr[mid] && arr[mid]<=arr[end]){
                if(arr[mid]<=target && target<=arr[end])
                        start=mid+1;
                else end=mid-1;
            }
            else {
                if(target<=arr[mid])
                        end=mid-1;
                else start=mid+1;
            }
        }
        return -1;
}
int main(){
	int arr[]={11,12,15,18,2,5,6,8};
	int n=sizeof(arr)/sizeof(int);
	int target;
	cin>>target;
	cout<<srchrotarr(arr,n,target);
}
