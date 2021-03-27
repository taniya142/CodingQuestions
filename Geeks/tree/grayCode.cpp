class Solution
{
    public:
    vector<string> graycode(int n)
    {
        //code here
        if(n==0)
            return {"0"};
        if(n==1)
            return{ "0", "1"};
            
        vector<string> recAns=graycode(n-1);
        vector<string> ans;
        
        for(int i=0;i<recAns.size();i++){
            string s=recAns[i];
            ans.push_back("0" +s);
        }
        for(int i=recAns.size()-1;i>=0;i--){
            string s=recAns[i];
            ans.push_back("1" +s);
        }
        return ans;
    }
};