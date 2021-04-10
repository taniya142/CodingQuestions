// https://www.youtube.com/watch?v=ww4V7vRIzSk

long long maximumAmount(int arr[], int n) 
{
    // Your code here
    
    long long dp[n][n];
    // memset(dp,-1,sizeof(dp));
    
    
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j]= arr[i];
            }
            else if(g==1){
                dp[i][j]= max(arr[i],arr[j]);
            }
            //  if(dp[i][j]!=-1){
            //     return dp[i][j];
            // }
            else{
             dp[i][j]=max(arr[i] + min( dp[i+2][j],dp[i+1][j-1]) ,
                        arr[j] + min(dp[i+1][j-1],dp[i][j-2]));
            }
        }
    }
    
    return dp[0][n-1];

    
    
}

// long long maximumAmt(int arr[], int i,int j,int dp[][1000]){
    
    
//     if(i+1==j){
//         return max(arr[i],arr[j]);
//     }
//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }
    
//   return dp[i][j]=max(arr[i] + min( maximumAmt(arr,i+2,j,dp),maximumAmt(arr,i+1,j-1,dp)),
//                         arr[j] + min(maximumAmt(arr,i+1,j-1,dp),maximumAmt(arr,i,j-2,dp)));
    
// }