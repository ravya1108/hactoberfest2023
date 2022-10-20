#include<bits/stdc++.h>
using namespace std;

const int N=101;
int dp[N][N];

int matrixChainCost(vector <int> &p, vector<vector<int>> &v, int i, int j, int *c){
    
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    else{
        v[i][j]++;
        (*c)++;
    }
    
    if(i==j){
        dp[i][j]=0;
        return dp[i][j];
    }
    
    dp[i][j]=INT_MAX;
    int mincost=INT_MAX;
    int cost;    
    for(int k=i; k<j; k++){
        cost = matrixChainCost(p, v, i, k, c)+matrixChainCost(p, v, k+1, j, c)+p[i-1]*p[k]*p[j];
        mincost=min(mincost, cost);
    }
    dp[i][j]=mincost;
    return dp[i][j];
}

void display(vector<vector<int>> &v, int n){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(i<=j)
            cout<<"Frequency of subproblem ["<<i<<", "<<j<<"] : "<<v[i][j]<<endl;
        }
    }
}

int main(){
    cout<<"Enter number of matrices : ";
    int n;
    cin>>n;
    cout<<"Enter size of each matirix"<<endl;
    vector <int> p;
    int x;
    for(int i=0;i<n+1;i++){
        cin>>x;
        p.push_back(x);
    }

    int subproblems=n*(n+1)/2;
    int c=0;
    vector<vector<int>> subproblem_count;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    
    for(int i=0;i<n+1;i++){
        vector<int> temp;
        for(int j=0;j<n+1;j++){
            temp.push_back(0);
        }
        subproblem_count.push_back(temp);
    }
    
    int min_cost = matrixChainCost(p, subproblem_count, 1, n, &c);
    cout<<"Minimum cost : "<<min_cost<<endl;
    cout<<"Number of subproblems : "<<subproblems<<endl;
    //cout<<"Number of subproblems : "<<c<<endl;
    cout<<"Frequency of each subproblem : "<<endl;
    display(subproblem_count, n);
    
    return 0;
}