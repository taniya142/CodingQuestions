class Solution{

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    bool dp[n+1][sum+1];
	    
	    
	    for(int i=1;i<=sum;i++){
	        dp[0][i]=false;
	    }
	    for(int i=0;i<=n;i++){
	        dp[i][0]=true;
	    }
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            dp[i][j]=dp[i-1][j];
	            
	            int val=j-arr[i-1];
	            if(j>=arr[i-1]){
	                dp[i][j]|=dp[i-1][val];
	            }
	        }
	    }
	    
	    int diff=INT_MAX;
	    for(int i=sum/2;i>=0;i--){
	        if(dp[n][i]==true){
	            diff=sum-2*i;
	            break;
	        }
	    }
	    return diff;
	} 
};