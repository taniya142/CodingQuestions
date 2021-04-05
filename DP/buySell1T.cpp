#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int buy=arr[0];
    int sell=arr[1]-buy;
    
    for(int i=1;i<n-1;i++){
         if(buy>arr[i])
            buy=arr[i];
         
        if(sell<arr[i+1]-buy)
             sell=arr[i+1]-buy;
        
          
        
    }
    cout<<sell<<endl;
}