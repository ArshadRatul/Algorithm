#include<iostream>
using namespace std ;
int FindDigit(int n)
{
    int rem=0 , rev=0 , sum=0 ;
    int x=n ;
    while(n!=0)
    {

        rem = n%10 ;
        if (rem == 0)
        {
            n= n / 10 ;
            continue ;
        }
        if (x%rem==0)
        {
            sum=sum+1 ;
        }
        n= n / 10 ;
    }
    return sum ;
}
int main ()
{
    int n=0, t=0 , ans=0 ;
    cin >> t ;
    for (int i=0;i<t;i++)
    {
         cin >> n ;
         ans = FindDigit(n) ;
         cout << ans << endl ;
    }

    return 0 ;
}
