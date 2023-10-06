#include<bits/stdc++.h>
using namespace std;
int srch(int n,int target,int arr[]){
	int start=0;
	int end=1;
	while(target>arr[end]){
		start=end;
		end=end*2;
	}
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]>target){
			end=start-1;
		}
		else start=mid+1;
	}
	return -1;
}
int main(){
	int n,target;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>target;
	cout<<srch(n,target,arr);
}
