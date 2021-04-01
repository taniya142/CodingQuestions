#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int amt;
    cin>>amt;
    
    int dp[amt+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    
    for(int j=0;j<n;j++){
        for(int i=arr[j];i<amt+1;i++){
                dp[i]+=dp[i-arr[j]];
            
        }
    }
    
    cout<<dp[amt]<<endl;
    
}