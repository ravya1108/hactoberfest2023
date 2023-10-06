#include<bits/stdc++.h>
using namespace std;
int srch(int arr[],int n,int target){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==target) return mid;
		else if(arr[mid-1]==target && mid-1>start) return mid-1;
		else if(arr[mid+1]==target && mid+1<end) return mid-1;
		else if(target<arr[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return -1;
}
int main(){
	int arr[]={5,10,30,20,40};
	int n=sizeof(arr)/sizeof(int);
	int target;
	cin>>target;
	cout<<srch(arr,n,target);
}
