#include <bits/stdc++.h>
using namespace std;

long long countWays(int n)
    {
        
        // your code here
        long long int dp[n+1];
        
            dp[1]=1;
         
            dp[2]=2;
        
            dp[3]=4;
       
        for(int i=4;i<=n;i++){
            dp[i]=(dp[i-1] + dp[i-2] + dp[i-3]);
        }
        
     return dp[n];   
}
int cs(int n,int a[]){
    // write your code here

    
    if(n==0){
       return 1; 
    }
        
    else if(n<0){
        return 0;
    }
        
    
    if(a[n]>0){
       return a[n]; 
    }
        
    int n1=cs(n-1,a);
    int n2=cs(n-2,a);
    int n3=cs(n-3,a);
    int cp=n1+n2+n3;
    
    a[n]=cp;
    
    return cp;

}

int main(){
    int n;
    cin>>n;
    int a[n+1]={0};
    
    cout<<cs(n,a)<<endl;
}
