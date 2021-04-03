#include<bits/stdc++.h>

using namespace std;



int main(){
    int n,k;
    cin>>n>>k;
    
    int arr[n][k];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
    
    int paint[n][k];
    
    for(int j=0;j<k;j++){
        paint[0][j]=arr[0][j];
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<k;j++){
            int min=INT_MAX;
            
            for(int a=0;a<k;a++){
                if(a!=j){
                    if(paint[i-1][a]<min){
                        min=paint[i-1][a];
                    }
                }
            }
            paint[i][j]=arr[i][j]+min;
        }
    }
    
    
    int min=paint[n-1][0];
    
    for(int j=0;j<k;j++){
        if(paint[n-1][j]<min){
            min=paint[n-1][j];
        }
    }
    
    cout<<min<<endl;
    
    
}