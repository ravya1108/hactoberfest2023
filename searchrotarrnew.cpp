#include<bits/stdc++.h>
using namespace std;
int fininrot(int arr[],int n,int target){
	int start=0;
	int end=n-1;
	int smal=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		int next=(mid+1)%n;
		int prev=(mid+n-1)%n;
		if(arr[mid]<=arr[prev]&& arr[mid]<=arr[next]){
			smal=mid;
			break;
		}
		else if(arr[mid]<=arr[end]){
			end=mid-1;
		}
		else if(arr[mid]>=arr[start]){
			start=mid+1;
		}
	}
	if(smal==-1) return -1;
	start=0;
	end=n-1;
	if(arr[smal]<=target && arr[start]>=target){
		end=smal;
	}
	else{
		start=smal;
	}
	while(start<=end){
		int midi=start+(end-start)/2;
		if(arr[midi]==target) return midi;
		else if(arr[midi]>target){
			end=midi-1;
		}
		else{
			start=midi+1;
		}
	}
}
int main(){
	int arr[]={11,12,15,18,2,5,6,8};
	int n=sizeof(arr)/sizeof(int);
	int target;
	cin>>target;
	cout<<fininrot(arr,n,target);
}
