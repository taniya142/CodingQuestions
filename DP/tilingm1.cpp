#include<bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    
    long long int dp[n+1];
    memset(dp,0,sizeof(dp));
    
    for(int i=1;i<=n;i++){
        if(i<m){
            dp[i]=1;
        }else if(i==m){
            dp[i]=2;
        }else{
            dp[i]=dp[i-1] + dp[i-m];
        }
    }
    
    cout<<dp[n]<<endl;
    
}