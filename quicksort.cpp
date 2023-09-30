#include<iostream>
using namespace std;
int partition(int array[],int si,int ei){
    int pivot = array[si];
    int count=0;
    for (int i=si+1;i<=ei;i++){
        if (array[i]<=pivot){
            count++;
        }
    }
    int pivotindex=si+count;
    swap(array[pivotindex],array[si]);
    int i=si;
    int j=ei;
    while(i<pivotindex && j>pivotindex){
         while(array[i]<=pivot){
            i++;
        }
        while(array[j]>pivot){
            j--;
        }
        if (i<pivotindex && j>pivotindex){
            swap(array[i++],array[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int array[],int si,int ei){
    if (si>=ei){
        return;
    }

    int p=partition(array,si,ei);
    quicksort(array,si,p-1);
    quicksort(array,p+1,ei);
}
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int array[n];

    cout<<"enter array element:";
    for(int i=0; i<n; i++){
         cin>>array[i];
    }
    quicksort(array,0,n-1);
    for(int i=0; i<n; i++){
         cout<<array[i]<<" ";
         cout<<endl;
    }
}