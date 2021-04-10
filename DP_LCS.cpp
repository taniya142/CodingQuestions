#include<iostream>
#include <cstring>

using namespace std;


int max(int a, int b); 

int LCS(char *x, char*y , int m, int n)
{
	if(m==0 || n==0)
		return 0;
	else if(x[m-1] == y[n-1])
		return 1+ LCS(x,y,m-1,n-1);
	else
		return max(LCS(x,y,m-1,n),LCS(x,y,m,n-1));
}
int max(int a,int b)
{
	return (a>b)?a:b;
}

int main()
{
	char x[]="AGTERSX";
	char y[]="GZXTURSVX";

	int m=strlen(x);
	int n=strlen(y);

	cout<<LCS(x,y,m,n)<<endl;
}
