#include <bits/stdc++.h>
using namespace std;

vector <int> pattern(int n){
	vector <int> v;
	if(n==0 || n<0){
		v.push_back(n);
		return v;
	}
	pattern(n-5);
	
	v.push_back(n);
		

	return v;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<int> res=pattern(n);
		for(int i=0;i<res.size();i++){
			cout<<res[i]<<" ";
		}
	}
}