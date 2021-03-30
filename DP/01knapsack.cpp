#include<bits/stdc++.h>

using namespace std;

int t[51][11];


int knapsack(int n,int val[],int wt[],int cap){
    if(n==0 || cap==0)
        return 0;
        
    if(t[n][cap]!=-1)
        return t[n][cap];
    
    if(wt[n-1]<=cap){
        return t[n][cap]=max((val[n-1] + knapsack(n-1,val,wt,cap-wt[n-1])),knapsack(n-1,val,wt,cap));
    }
    else if(wt[n-1]>cap){
        return t[n][cap]=knapsack(n-1,val,wt,cap);
    }
    return 0;
}

int main(){

    memset(t,-1,sizeof(t));

    int n;
    cin>>n;
    
    int val[n];
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    int wt[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    int cap;
    cin>>cap;
    
    cout<<knapsack(n,val,wt,cap)<<endl;
}