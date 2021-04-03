#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n][3];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    long long  paint[n][3];
    
        paint[0][0]=arr[0][0];
        paint[0][1]=arr[0][1];
        paint[0][2]=arr[0][2];
    
    
    for(int i=1;i<n;i++){
        paint[i][0]=arr[i][0] + min(paint[i-1][1],paint[i-1][2]);
         paint[i][1]=arr[i][1] + min(paint[i-1][0],paint[i-1][2]);
          paint[i][2]=arr[i][2] + min(paint[i-1][0],paint[i-1][1]);
        
    }
   
    long long minCost= min(paint[n-1][0],(min(paint[n-1][1],paint[n-1][2])));
    
    cout<<minCost<<endl;
    
}
