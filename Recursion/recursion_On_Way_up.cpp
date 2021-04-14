// PRINT SUBSEQUENCE

#include <iostream>
using namespace std;

void printSS(string ques, string ans){
    // write your code here
    
    if(ques.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=ques[0];
    string restStr = ques.substr(1);
    
    printSS(restStr,ans + ch);
    printSS(restStr,ans + "");
    
    
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}


// PRINT KPC
#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){
    // write your code here
    
    if(ques.length()==0){
        cout<<asf<<endl;
        return;
    }
    
    char ch=ques[0];
    string restStr=ques.substr(1);
    
    string chCode=codes[ch-'0'];
    for(int i=0;i<chCode.size();i++){
        char ch2=chCode[i];
        printKPC(restStr,asf + ch2);
    }
    
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}


// PRINT STAIRPATH
#include <iostream>
using namespace std;

void printStairPaths(int n, string psf){
    // write your code here
    
    if(n==0){
        cout<<psf<<endl;
        return;
    }else if(n<0){
        return;
    }
    
    printStairPaths(n-1, psf+ '1');
    printStairPaths(n-2, psf+ '2');
    printStairPaths(n-3, psf+ '3');
    
}

int main(){

    int n;
    cin >> n;
    printStairPaths(n, "");
}

// PRINT MAZEPATH

#include <iostream>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf){
    // write your code here
    
    if(sr==dr && sc==dc){
        cout<<psf<<endl;
        return;
    }
    
    if(sc<dc)
        printMazePaths(sr,sc+1,dr,dc,psf +'h' );
    
    if(sr<dr)
        printMazePaths(sr+1,sc,dr,dc,psf +'v');
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}
// PRINT MAZE WITH JUMPS

#include<iostream>
using namespace std;


    void printMazePaths(int sr, int sc, int dr, int dc, string psf) {
        // write your code here
        
        if(sr==dr && sc==dc){
            cout<<psf<<endl;
            return;
        }
        
         for(int i=1;i<=dc-sc;i++){
              printMazePaths(sr,sc+i,dr,dc,psf + 'h'+ std:: to_string(i));  
        }
        for(int i=1;i<=dr-sr;i++){
              printMazePaths(sr+i,sc,dr,dc,psf + 'v'+ std:: to_string(i));  
            
        }
        
         for(int i=1;i<=dr-sr && i<=dc-sc;i++){
            
            printMazePaths(sr+i,sc+i,dr,dc,psf + 'd'+ std:: to_string(i));  
            
        }
        
    }

int main() {
        int n ;
        int m ;cin>>n>>m;
        printMazePaths(0, 0, n - 1, m - 1, "");
    }