class Solution{
    public:
    
  vector<string> vs = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void permulate(vector<string> &ans,string &s ,int arr[] ,int n ,int i=0)
{
    if(i==n){
        ans.push_back(s);
        return ;
    }
    for(int j=0; j<(vs[arr[i]]).length() ; j++)
    {
        s+=vs[arr[i]][j] ;
        permulate(ans,s,arr,n,i+1);
        
        s.pop_back();
    }
}

vector <string> possibleWords(int arr[],int N)
{
    string s="";
    
    int i=0;
    
    vector<string> ans ;
    permulate(ans,s , arr , N, i);
    return ans;
}

};