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
    
   
        for(int i=1;i<=dc-sc;i++){
        vector<string> hPath=getMazePaths(sr,sc+i,dr,dc);
         for(string str:hPath){
             myResult.push_back('h'+ std::to_string(i) + str);
        }
    }
   for(int i=1;i<=dr-sr;i++){
      vector<string>  vPath=getMazePaths(sr+i,sc,dr,dc);
         for(string str:vPath){
            myResult.push_back('v'+ std::to_string(i) + str);
        }
    }
    for(int i=1;i<=dc-sc && i<=dr-sr;i++){
      vector<string>  dPath=getMazePaths(sr+i,sc+i,dr,dc);
         for(string str:dPath){
            myResult.push_back('d'+ std::to_string(i) + str);
        }
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