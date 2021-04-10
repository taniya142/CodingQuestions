#include<iostream>
#include <climits>

using namespace std;

int MCO(int p[],int i,int j)
{
	if(i==j)
		return 0;
	int k,count =0;
	int min=INT_MAX;

	for (k = i; k < j; k++) 
    {
        count = MCO(p, i, k)
                + MCO(p, k + 1, j)
                + p[i - 1] * p[k] * p[j];
 
        if (count < min)
            min = count;
    }
 
    return min;
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 2, 3, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << MCO(arr, 1, n - 1) << endl;
}
