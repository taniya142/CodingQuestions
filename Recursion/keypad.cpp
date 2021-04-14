#include <iostream>
#include <vector>
using namespace std;

vector<string> vs = {".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

vector<string> kpc(string s){
    // write your code here
    
     if(s.size()==0){
      vector<string> bres;
      bres.push_back("");
      return bres;
    }
    
    //573
    char ch=s[0];//5
    string restStr=s.substr(1);//73
    vector<string> recResult = kpc(restStr); // 6 words of 73
    
    vector<string> myResult;
    
    string chCode=vs[ch-'0'];
    for(int i=0;i<chCode.size();i++){
        char ch2=chCode[i];
       for(string rstr:recResult){
            myResult.push_back(ch2 + rstr);
        }
    }
    
    return myResult;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = kpc(s);
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