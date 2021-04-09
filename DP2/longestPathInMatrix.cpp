class Solution{
public:

    int max3(int a ,int b,int c){
        return max(a,max(b,c));
    }
    int maximumPath(int n, vector<vector<int>> Matrix)
    {
        // code here
        int dp[n][n];
        
        for(int c=0;c<n;c++){
            dp[n-1][c]=Matrix[n-1][c];
        }
        
        for(int r=n-2;r>=0;r--){
            for(int c=0;c<n;c++){
                if(c==0){
                    dp[r][c]=Matrix[r][c] + max(dp[r+1][c],dp[r+1][c+1]);
                }
                else if(c==n-1){
                    dp[r][c]=Matrix[r][c] + max(dp[r+1][c],dp[r+1][c-1]);
                }
                else{
                    dp[r][c]=Matrix[r][c] + max3(dp[r+1][c],dp[r+1][c+1],dp[r+1][c-1]);
                }
            }
        }
        
        int maxi=INT_MIN;
        for(int c=0;c<n;c++){
            if(dp[0][c]>maxi){
                maxi=dp[0][c];
            }
        }
        
        return maxi;
        
    }
};