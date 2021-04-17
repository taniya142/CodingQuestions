#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int max_el=*max_element(a,a+n);
	int matrix[max_el][n];

	for(int i=max_el;i>=1;i--){
		for(int j=0;j<n;j++){
			if(a[j]>=i){
				// cout<<matrix[i][j]="*";

				cout<<" * ";
			}else{
				cout<<"   ";
			}
		}
		cout<<endl;
	}

}