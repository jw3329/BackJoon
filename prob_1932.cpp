#include <iostream>
using namespace std;

#define max(a,b) (a>b?a:b)

int main()
{
    int n;
    cin >> n;
    
    int d[501][501];
    int arr[501][501];
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin >> arr[i][j];
    
    d[1][1] = arr[1][1];
    
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j!=1 && j!=i)
                d[i][j] = max(d[i-1][j-1],d[i-1][j]) + arr[i][j];
            
            if(j == 1)
                d[i][j] = d[i-1][j] + arr[i][j];
                
            if(j == i)
                d[i][j] = d[i-1][j-1] + arr[i][j];
                
        }
    }
    
    int res = d[n][1];
    
    for(int i=2;i<=n;i++)
        res = max(res,d[n][i]);
    cout << res << endl;
    return 0;
}
