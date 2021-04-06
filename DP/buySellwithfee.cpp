 #include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];  
    }
    int k;
    cin>>k;
    
    int oldB=-arr[0];
    int oldS=0;
   
    
    for(int i=1;i<n;i++){
        int newB=0;
        int newS=0;
        
        if((oldS-arr[i])>oldB){
            newB=(oldS-arr[i]);
        }else{
            newB=oldB;
        }
        if(arr[i]+oldB-k > oldS){
            newS=arr[i]+oldB-k;
        }else{
            newS=oldB;
        }
        
        oldB=newB;
        oldS=newS;
    }
    
    cout<<oldS<<endl;
}
    
    
   

    
    
    // int b[n],s[n];
    // memset(b,0,sizeof(b));
    // memset(s,0,sizeof(s));
    // b[1]=-arr[0];
    
    // for(int i=1;i<=n;i++){
    //     if((s[i-1]-arr[i])>b[i-1]){
    //         b[i]=(s[i-1]-arr[i]);
    //     }else{
    //         b[i]=b[i-1];
    //     }
    //     if(arr[i]+b[i-1]-k > s[i-1]){
    //         s[i]=arr[i]+b[i-1]-k;
    //     }else{
    //         s[i]=s[i-1];
    //     }
    // }
// cout<<s[n]<<endl;
// }