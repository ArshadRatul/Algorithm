#include<iostream>
using namespace std ;
int main ()
{
    int n=0, k=0 , b=0 , sum=0 ;
    cin >> n ;
    int arr[n] ;
    cin >> k ;
    for (int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    cin >>b ;
    for (int i=0;i<n;i++)
    {
        if(arr[k]!=arr[i])
        {
            sum = sum + arr[i] ;
        }
    }
    if ((sum/2)==b)
    {
        cout << "Bon Appetit" ;
    }
    else
    {
        cout << (arr[k]/2) ;
    }
    return 0 ;
}
