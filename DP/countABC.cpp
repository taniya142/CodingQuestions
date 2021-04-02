#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string str;
    cin>>str;
    
    int n=str.length();
    
    int a=0;
    int ab=0;
    int abc=0;
    
    for(int i=0;i<n;i++){
        if(str[i]=='a'){
            a=2*a +1;
        }else if(str[i]=='b'){
            ab=2*ab+a;
        }else if(str[i]=='c'){
            abc=2*abc+ab;
        }
    }
    
    cout<<abc<<endl;
}

