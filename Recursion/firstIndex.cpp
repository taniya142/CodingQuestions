// FIRST_INDEX
#include<iostream>
using namespace std;

int firstIndex(int arr[], int idx, int x, int n){
    // write your code here
    
    if(idx==n-1)
        return -1;
        
    if(arr[idx]==x){
        return idx;
    }
    
    firstIndex(arr,idx+1,x,n);
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}

#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    // write your code here
    
    if(idx==0){
        return -1;
    }
    
    if(arr[idx]==x){
        return idx;
    }
    
    lastIndex(arr,idx-1,x,n);

}

// LAST_INDEX
int main(){
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, n-1, d, n);
    cout << p << endl;
}