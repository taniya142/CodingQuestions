 int minAns(int a, int b,int c){
      return min(a,min(b,c));
  }
  
  
    int editDistaneAns(string s, string t,int m,int n){
    
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0)
                    dp[i][j]=j;
                else if(j==0)
                    dp[i][j]=i;
                    
                else if(s[i-1]==t[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else{
                    dp[i][j]=1 + minAns(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    
    int editDistance(string s, string t) {
        // Code here
        int m=s.length();
        int n=t.length();
        
        
        
        int ans=editDistaneAns(s,t,m,n);
        
        return ans;
    }