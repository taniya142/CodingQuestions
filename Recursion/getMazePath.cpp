#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    
    if(sr==dr && sc==dc){
        vector<string> myResult;
        myResult.push_back("");
        return myResult;
    }
    vector<string> myResult;
    
    vector<string> hPath;
    vector<string> vPath;
    
    if(sc<dc){
        hPath=getMazePaths(sr,sc+1,dr,dc);
    }
    
    if(sr<dr){
        vPath=getMazePaths(sr+1,sc,dr,dc);
    }
    
    for(string str:hPath){
        myResult.push_back('h' + str);
    }
    for(string str:vPath){
        myResult.push_back('v' + str);
    }
    
    return myResult;
}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}