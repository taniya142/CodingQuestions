#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    // int i=0,c=0;
    
    // while(i!=n-1){
    //     i=i+arr[i];
    //     c++;
    // }
    
    // cout<<c<<endl;
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    dp[n]=0;
    

    for(int i=n-1;i>=0;i--){
        if(arr[i]>0){
            int min_val=INT_MAX;
                for(int j=1;j<=arr[i] && (i+j)<n+1 ;j++){
                    if(dp[i+j]!=-1){
                       min_val=min(min_val,dp[i+j]); 
                    }
                }
                if(min_val!=INT_MAX){
                    dp[i]=1+min_val;
                }
        }
        
    }
    cout<<dp[0]<<endl;
}