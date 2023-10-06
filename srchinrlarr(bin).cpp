#include<bits/stdc++.h>
using namespace std;
int srch(int arr[],int target,int n){
	sort(arr,arr+n);
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==target){
			return mid;
		}
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
	cout<<srch(arr,target,n);
}
