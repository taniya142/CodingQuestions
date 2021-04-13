#include<iostream>
using namespace std;

int power(int x,int n){
   // write your code here
   if(n==0)
        return 1;
    
    return x * power(x,n-1);

}


int main(){
    int n,x; cin>>x>>n;
    cout<<power(x,n);
}


// POWER LOGARITHMIC
// #include<iostream>
// using namespace std;

// int powerLogarithmic(int x,int n){
//     // write your code here
    
//     if(n==1)
//         return x;
    
//     if(n%2==0){
//         return powerLogarithmic(x,n/2) * powerLogarithmic(x,n/2);
//     }else{
//         return powerLogarithmic(x,n/2) * powerLogarithmic(x,n/2) * x;
//     }
    
// }

// int main(){
//     int x,n; cin>>x>>n;
//     cout<<powerLogarithmic(x,n);
// }