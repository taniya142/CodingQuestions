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
    
    long same=k;
    long diff=k*(k-1);
    long total=same + diff;
    
    for(int i=3;i<=n;i++){
       same=diff;
        diff=total * (k-1);
        total=same + diff;
        
    }
    
    cout<<total<<endl;
}