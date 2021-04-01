// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
    
//     int old0=1;
//     int old1=1;
    
//     for(int i=2;i<n+1;i++){
//         int new0=old1;
//         int new1=old0+old1;
        
//         old0=new0;
//         old1=new1;
//     }
    
//     cout<<old0+old1<<endl;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int dp0[n+1];
    int dp1[n+1];
    memset(dp0,0,sizeof(dp0));
    memset(dp1,0,sizeof(dp1));
    dp0[1]=1;
    dp1[1]=1;
    
    for(int i=2;i<n+1;i++){
        dp0[i]=dp1[i-1];
        dp1[i]=dp0[i-1]+dp1[i-1];
    }
    
    cout<<dp0[n]+ dp1[n]<<endl;
}