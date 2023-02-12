#include<iostream>
using namespace std ;
int ViralAdvertising(int n)
{
    int x=5 ;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        x=x/2;
        sum=sum + x ;
        x = x * 3 ;
    }
    return sum ;
}
int main ()
{
    int n=0 , result=0 ;
    cin >> n ;
    result=ViralAdvertising(n) ;
    cout << result ;
    return 0 ;
}
