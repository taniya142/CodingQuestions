#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    int arr[n][m];
    for(int i = 0 ; i < n ;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    int maze[n][m];
    maze[n-1][m-1]=arr[n-1][m-1];
    
    for(int i=m-2;i>=0;i--){
        maze[n-1][i]=arr[n-1][i]+maze[n-1][i+1];
    }
     for(int i=n-2;i>=0;i--){
        maze[i][m-1]=arr[i][m-1]+maze[i+1][m-1];
    }
    
    for(int i=n-2;i>=0;i--){
        for(int j=m-2;j>=0;j--){
            maze[i][j]=arr[i][j] + min(maze[i+1][j],maze[i][j+1]);
        }
    }
    
    cout<<maze[0][0]<<endl;
    
   
}