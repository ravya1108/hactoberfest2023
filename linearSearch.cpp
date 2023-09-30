#include <iostream>
using namespace std;
bool check(int array[],int n,int x){
    if (n==0){
        return false;
    }
    else{
        if (x==array[n]){
            return true;
        }
    
        else{
        return check(array,n-1,x);
        }
    }
}

int main(){
    int n;
    int x;
    cout<<"enter value of n";
    cin>>n;
    int array[n];

    cout<<"enter array element:";
    

    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"enter a number which you want to find in array"<<endl;
    cin>>x;
    
    cout<<check( array, n,x);
}