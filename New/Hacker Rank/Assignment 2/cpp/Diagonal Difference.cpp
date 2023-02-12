#include<iostream>
using namespace std;
int main()
{
    int n,r=0,l=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k=n-1,j=0;
    for(int i=0;i<n;i++)
    {
        r=r+arr[i][i];
        l=l+arr[i][k];
        k--;
    }
    j=r-l;
    if(j<0)
    {
        j=-j;
    }
    cout<<j;
    return 0;
}
