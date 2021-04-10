#include <bits/stdc++.h>
using namespace std;

int fibDp(int n,int a[]){
    if(n==0 || n==1 )
        return n;
        
    if(a[n]!=0){
        return a[n];
    }
    
    int fib1=fibDp(n-1,a);
    int fib2=fibDp(n-2,a);
    int fibn=fib1+fib2;
    

    a[n]=fibn;
    
    return fibn;
    
}

// int fib(int n){
    // write your code here
    // int dp[n+2];
    // memset(dp,0,sizeof(dp));
    
    // dp[0]=0;
    // dp[1]=1;
    
    // if(dp[n]!=0){
        // return dp[n];
    // }
    // for(int i=2;i<=n;i++){
       // dp[i]=dp[i-1] + dp[i-2]; 
    // }
    // return dp[n];
    
// }

int main(){
    int n;
    cin>>n;
    int a[n+1]={0};
    
    cout<<fibDp(n,a)<<endl;
    return 0;
}