#include<bits/stdc++.h>
using namespace std;
int floorsrch(int arr[],int n,int ele){
	int start=0;
	int end=n-1;
	int res=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==ele) return ele;
		else if(arr[mid]>ele){
			end=mid-1;
			return arr[end];
		}
		else{
			start=mid+1;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,8,10,10,12,19};
	int n=sizeof(arr)/sizeof(int);
	int ele;
	cin>>ele;
	cout<<floorsrch(arr,n,ele);
}
