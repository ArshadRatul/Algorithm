#include<iostream>
using namespace std ;
int main ()
{
    int SizeOfArray=0 ;
    cin >> SizeOfArray ;
    long int arr[SizeOfArray] ;
    long int sum=0 ;
    for(int i=0;i<SizeOfArray;i++)
    {
        cin>>arr[i] ;
        sum=sum+arr[i] ;
    }
    cout<<  sum ;

    return 0 ;
}
