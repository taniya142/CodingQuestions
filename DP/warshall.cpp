#include<iostream>
#include <climits>

using namespace std;

#define n 4
#define INF 99999 
void print(int ans[][n]);

void warshall(int ques[][n])
{
	int  ans[n][n],j,k,i;

	for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				ans[i][j]=ques[i][j];

	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(ans[i][k]+ans[k][j]<ans[i][j])
					ans[i][j]=ans[i][k]+ans[k][j];
			}
		}
	}
	print(ans);

}

void print(int ans[][n])  
{  
   
    for (int i = 0; i < n; i++)  
    {  
        for (int j = 0; j < n; j++)  
        {  
            if (ans[i][j] == INF)  
                cout<<"INF"<<"     ";  
            else
                cout<<ans[i][j]<<"     ";  
        }  
        cout<<endl;  
    }  
}

int main()  
{  
   
    int ques[n][n] = { {0, 5, INF, 10},  
                        {INF, 0, 3, INF},  
                        {INF, INF, 0, 1},  
                        {INF, INF, INF, 0}  
                    };  
    
    warshall(ques);  
    return 0;  
}