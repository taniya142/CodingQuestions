 int minJumps(int arr[], int n){
        // Your code here
        // O(n)
        // maxReach= The variable maxReach stores at all time the maximal reachable index in the array.
        // step= The variable step stores the number of steps we can still take(and is initialized with value at index 0, i.e. initial number of steps)
        // jump =jump stores the amount of jumps necessary to reach that maximal reachable position.
        int maxReach=arr[0];
        int step=arr[0];
        int jump=1;
        
        if(arr[0]==0){
            return -1;
        }
        for(int i=1;i<n;i++){
            if(i==n-1)
                return jump;
            
            maxReach=max(maxReach,i+arr[i]);
            
            step--;
            
            if(step==0){
                jump++;
                if(i>=maxReach){
                    return -1;
                }
                step=maxReach-i;
            }
        }
        return -1;
    }
//   in(On2)
    // int minJumps(int arr[], int n){
    //     // Your code here
    //     int dp[n];
    //     memset(dp,INT_MAX,sizeof(dp));
    //     dp[n-1]=0;
        
    //     for(int i=n-2;i>=0;i--){
    //         if(arr[i]==0){
    //                 dp[i]=INT_MAX;
    //                 continue;
    //             }
    //         // for(int j=1;j<=arr[i];j++){
    //         auto jump = std::min(i+arr[i]+1, n);
    //         auto min_val = *std::min_element(dp + i+1,dp + jump);
    //         if(min_val==INT_MAX){
    //             dp[i]=INT_MAX;
    //         }else{
    //             dp[i]=1 + min_val;
    //         }
                
    //         // }
    //     }
    //     if(dp[0]==INT_MAX)
    //         dp[0]=-1;
            
    //     return dp[0];
    // }