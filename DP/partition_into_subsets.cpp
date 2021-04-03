#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    long long int dp[k+1][n+1];
    memset(dp,0,sizeof(dp));
    
    if(n==0 || k==0 || n<k){
        cout<<0<<endl;
    }
    
    
    for(int i=1;i<k+1;i++){
        for(int j=1;j<n+1;j++){
            if(i==1){
                dp[i][j]=1;
            }else if(i>j){
                dp[i][j]=0;
            }else{
                dp[i][j]=dp[i][j-1]*i + dp[i-1][j-1];
            }
        }
    }
    
    cout<<dp[k][n]<<endl;
    
    
}