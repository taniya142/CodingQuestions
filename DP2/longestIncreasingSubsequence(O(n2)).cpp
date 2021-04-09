int longestIncreasingSubsequence(int n, int arr[])
    {
      // your code here
      int dp[n];
      dp[0]=1;
       
      for(int i=1;i<n;i++){
          dp[i]=1;
          for(int j=0;j<i;j++){
              if(arr[i]>arr[j]){
                  dp[i]=max(dp[j]+1 , dp[i]);
              }
          }
          
      }
      return *max_element(dp,dp+n);
    }
