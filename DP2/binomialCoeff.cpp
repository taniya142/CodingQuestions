#include<bits/stdc++.h>

using namespace std;

  int nCr(int n, int r)
{
    int i,j,mod=pow(10,9)+7;
    vector<vector<int>>dp(n+1,vector<int>(r+1,0));
    
    dp[0][0]=1;
        for(i=1;i<=r;i++){
            dp[0][i]=0;
        }
        for(i=1;i<=n;i++){
            dp[i][0]=1;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=min(i,r);j++)
            {
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
            }
    }
    return dp[n][r];
}



// int bc[1001][1001];

// int binomialCoeff(int n,int k){

// 	memset(bc,-1,sizeof(bc));

// 	if(bc[n][k]!=-1){
// 		return bc[n][k];
// 	}
// 	if(k==0){
// 		bc[n][k]=1;
// 		return bc[n][k];
// 	}
// 	 if (k == n) {
//         bc[n][k] = 1;
//         return bc[n][k];
//     }

// 	return bc[n][k]=binomialCoeff(n-1,k-1) + binomialCoeff(n-1,k);

// }

// int main(){
// 	int n,k;
// 	cin>>n>>k;

// 	cout<<binomialCoeff(n,k)<<endl;
// }

// int min(int a,int b);

// int binomialCoeff(int n,int k)
// {
// 	int c[n+1][k+1];
// 	int i,j;

// 	for(i =0;i<=n;i++)
// 	{
// 		for(j=0;j<= min(i,k);j++)
// 		{
// 			if(j==0 || j==i)
// 				c[i][j]=1;
// 			else
// 				c[i][j]=c[i-1][j-1]+c[i-1][j];
// 		}
// 	}
// 	return c[n][k];
// }

// int min(int a, int b)
// {
//     return (a < b) ? a : b;
// }

// int main()
// {
// 	int n,k;
// 	cin>>n>>k;

// 	cout<<binomialCoeff(n,k)<<endl;
// }