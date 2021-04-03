#include<bits/stdc++.h>
#define maxLen 1000

using namespace std;

int dp[1000];

int maxSum(int arr[],int n){
    
    
    memset(dp,-1,sizeof(dp));
    
    if(n<=0){
        return 0;
    }
    
    if(dp[n]!=-1)
        return dp[n];
    
    return dp[n]=max((arr[n-1] + maxSum(arr,n-2)),maxSum(arr,n-1));
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<< maxSum(arr,n)<<endl;
}