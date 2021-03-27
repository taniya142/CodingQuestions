class Solution
{
    public:
    
    void AllParenthesisUtil(int co,int cc,int n,string s,vector<string> &v){
    
    // co=count open, cc=coutn close
        
        if(s.size()==2*n){
            v.push_back(s);
            return;
        }
        
        if(co>cc){
            AllParenthesisUtil(co,cc+1,n,s+")",v);
            
            
        }
        if(co<n){
            AllParenthesisUtil(co+1,cc,n,s+"(",v);
        }
        
    }
vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        
        
        
        vector<string> ans;
        AllParenthesisUtil(0,0,n,"",ans);
        
    
        return ans;
    }
};