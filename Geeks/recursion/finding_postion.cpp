#include <iostream>
#include <math.h>
using namespace std;

// int a=2;
// static int position(int n,int a)
// {
//     if(a==n)
//     {
//         return a;
//     }
//     else if(a>n)
//     {
//         return a/2;
//     }
//     return position(n,a*2);
// }

int findPosition(int n){
    
    if(n>1)
    return findPosition(n/2) + 1;  
    
    else{
        return 0;
    }
    
     
    
    // int c=0;
    // c=log2(n);
    
    // return pow(2,c);
}

int main() {
	//code
	
	int t;
	cin>>t;
	int c=0;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    c=findPosition(n);
	    
	    cout<<pow(2,c)<<endl;
	    
	    
	}
	return 0;
	
}