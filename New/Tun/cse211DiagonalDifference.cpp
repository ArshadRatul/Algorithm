#include<iostream>
using namespace std ;
int main ()
{
    int size_of_array=0 , n=0 , m=0, sum=0 ;
    int ano_sum =0 , result=0 ;
    cin >> size_of_array ;
    n = size_of_array ;
    m = size_of_array ;
    int arr[n][m] ;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> arr[i][j] ;
        }
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if(i==j)
            {
                sum = sum + arr[i][j] ;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (i+j==m-1)
            {
                 ano_sum = ano_sum + arr[i][j] ;
            }
        }
    }
    result = sum - ano_sum ;
    if (result >= 0 )
    {
        cout << result ;
    }
    else
    {
        cout<< -1* result ;
    }
    return 0 ;
}
