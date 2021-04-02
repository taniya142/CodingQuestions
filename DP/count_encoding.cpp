#include<bits/stdc++.h>

using namespace std;

int encode(char *str,int n){
    int dp[n];
    memset(dp,0,sizeof(dp));
    
    dp[0]=1;
    
    for(int i=1;i<=n;i++){
        if(str[i-1]=='0' && str[i]=='0'){
            dp[i]=0;
        } 
        else if(str[i-1]=='0' && str[i]!='0'){
            dp[i]=dp[i-1];
        }else if(str[i-1]!='0' && str[i]=='0'){
            if(str[i-1]=='2' || str[i-1]=='1'){
                dp[i]= (i>=2 ? dp[i-2] : 1);
            }else{
                dp[i]=0;
            }
        }
        else{
            if (str[i - 1] == '1'
        || (str[i - 1] == '2'
        && str[i] < '7')){
                dp[i]=dp[i-1] + (i>=2 ? dp[i-2] : 1);
            }else{
                dp[i]=dp[i-1];
            }
        }
     }
     
     return dp[n-1];
}

int main(){
    
    char str[11];
    cin>>str;
    
    int n=strlen(str);
    
    cout<<encode(str,n)<<endl;
}

