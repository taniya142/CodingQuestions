#include <bits/stdc++.h>
using namespace std;

int cs(int n,int a[]){
    // write your code here

    
    if(n==0){
       return 1; 
    }
        
    else if(n<0){
        return 0;
    }
        
    
    if(a[n]>0){
       return a[n]; 
    }
        
    int n1=cs(n-1,a);
    int n2=cs(n-2,a);
    int n3=cs(n-3,a);
    int cp=n1+n2+n3;
    
    a[n]=cp;
    
    return cp;

}

int main(){
    int n;
    cin>>n;
    int a[n+1]={0};
    
    cout<<cs(n,a)<<endl;
}