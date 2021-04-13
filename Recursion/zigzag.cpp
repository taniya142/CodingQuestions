#include<iostream>
using namespace std;


void pzz(int n){
    // write your code here
    if(n==0){
        return;
    }

    cout<<n<<" ";   //1
    pzz(n-1);       //2
    cout<<n<<" ";   //3
    pzz(n-1);       //4
    cout<<n<<" ";   //5
}



int main(){
    int n; cin>>n;
    pzz(n);
}



// 0               0
//     1       1
//         2

// left is pre..... center is in.....right is post