#include<bits/stdc++.h>

using namespace std


// Can be solved by recursion by takes a hell lot of time!!!!!!!!!

int main(){
    int n;
    cin>>n;
    
    int dp[n+1];
    
    dp[1]=1;
    dp[2]=2;
    
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1] + dp[i-2];
    }
    
    cout<<dp[n]<<endl;
    
}
    
    