#include<iostream>
using namespace std ;
int BeautifulDays(int beginning,int ending,int k)
{
    int sum=0 ;
    for (int i=beginning;i<=ending;i++)
    {
       int rem=0 , rev=0 , integer_result=0 , copying=0  ;
       float result=0 ;
       copying = i ;
       while(copying!=0)
       {
           rem = copying%10 ;
           rev = rev*10 + rem ;
           copying=copying/10 ;
       }
       if (((i-rev)%k)==0)
       {
           sum = sum + 1 ;
       }
    }
    return sum ;
}
int main ()
{
    int beginning=0 , ending=0 , k=0 , ans=0 ;
    cin >> beginning >> ending ;
    cin >> k ;
    ans= BeautifulDays(beginning,ending,k) ;
    cout << ans ;

    return 0 ;
}
