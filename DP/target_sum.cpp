// #include<bits/stdc++.h>

// using namespace std;

// int t[31][51];


// int subset(int n,int val[],int tar){
//     if(n==0 || tar==0)
//         return 0;
        
//     if(t[n][tar]!=-1)
//         return t[n][tar];
    
//     if(val[n-1]<=tar){
//         return t[n][tar]=max((val[n-1] + subset(n-1,val,tar-val[n-1])),subset(n-1,val,tar));
//     }
//     else if(val[n-1]>tar){
//         return t[n][tar]=subset(n-1,val,tar);
//     }
//     return 0;
// }

// int main(){

//     memset(t,-1,sizeof(t));

//     int n;
//     cin>>n;
    
//     int val[n];
//     for(int i=0;i<n;i++){
//         cin>>val[i];
//     }
//     int tar;
//     cin>>tar;
    
//     int ans=subset(n,val,tar);
    
//     if(ans==tar){
//         cout<<"true"<<endl;
//     }else{
//         cout<<"false"<<endl;
//     }
// }

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    
    bool subset[n+1][tar+1];
    
    for(int i = 0; i < n+1; i++){
         for(int j = 0; j < tar+1; j++){
             subset[i][j]=false;
         }
     }
    
    for(int i=0;i<n+1;i++){
        for(int j=0;j<tar+1;j++){
            if(i==0 && j==0){
                subset[i][j]=true;
            }
            else if(i==0){
                subset[i][j]=false;
            }
            else if(j==0){
                subset[i][j]=true;
            }else{
                if(subset[i-1][j]==true){
                    subset[i][j]=true;
                }else{
                    int val=arr[i-1];
                    if(j>=val){
                        if(subset[i-1][j-val]==true){
                            subset[i][j]=true;
                        }
                    }
                }
            }
        }
    }
    
    
   if(subset[n][tar]==0){
       cout<<"false"<<endl;
   }
   else{
       cout<<"true"<<endl;
   }
    
   
}