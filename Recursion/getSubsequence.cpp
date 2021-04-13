#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    // write your code here
    
    if(s.size()==0){
      vector<string> bres;
      bres.push_back("");
      return bres;
    }
    
    char ch=s[0];
    string restStr=s.substr(1);
    
    vector<string> recResult=gss(restStr);
    
    vector<string> myResult;
    vector<string> recStr=recResult;
    for(int i=0;i<recStr.size();i++){
        myResult.push_back("" + recStr[i]);
    }
    for(int i=0;i<recStr.size();i++){
         myResult.push_back(ch + recStr[i]);
    }
    
    return myResult;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
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