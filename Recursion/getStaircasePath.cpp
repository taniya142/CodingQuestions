#include <iostream>
#include <vector>
using namespace std;


vector<string> getStairPath(int n){
    
     if(n==0){
      vector<string> bres;
      bres.push_back("");
      return bres;
    }else if(n<0){
        vector<string> bres;
        return bres;
    }
    
    vector<string> pa1=getStairPath(n-1);
    vector<string> pa2=getStairPath(n-2);
    vector<string> pa3=getStairPath(n-3);
    
    vector<string> myResult;
    
    for(string path:pa1){
        myResult.push_back('1' + path);
    }
    for(string path:pa2){
        myResult.push_back('2' + path);
    }
    for(string path:pa3){
        myResult.push_back('3' + path);
    }
    
    return myResult;
}

int main(){
    int n;
    cin >> n;
    vector<string> ans = getStairPath(n);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}








// 0[.]    -1[]     -2
//  1\         2\        3\  
            
//             1[1]
//                 1\           0[]     -1      
//                             2\    3\       
                        
//                         2[11,2]
//                                             again(0,-1,-2)
//                                             1\
//                                             1       0[]

//                             1\              2\      3\
//                                     3[111,12,21,3]



