#include<iostream>
using namespace std ;
int HurdleRace(int n,int k,int arr[])
{
    int highest = arr[0] ;
    int result=0 ;
    for (int i=0;i<n;i++)
    {
        if(highest<arr[i])
        {
            highest = arr[i] ;
        }
    }
    if (highest>k)
    {
        result= highest -k ;
    }
    return result ;
}
int main ()
{
    int n=0 , k=0 ;
    cin >> n ;
    cin >> k ;
    int arr[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    cout << HurdleRace(n,k,arr) ;

    return 0 ;
}
