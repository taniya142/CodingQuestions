#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    long long oldB=1;
    long long oldS=1;
    
    for(int i=2;i<=n;i++){
        long long newB=oldS;
        long long newS=oldS+oldB;
        
        oldS=newS;
        oldB=newB;
    }
    
    long long ans=oldS+oldB;
    
    cout<<(ans*ans)<<endl;
}