#include<iostream>
#include<math.h>
using namespace std;
long int getMoneySpent(long int b,long int keyboard[],long int n,long int drives[],long int m)
{
    long int maximum=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((keyboard[i]+drives[j])>maximum)
            {
                if(b>=(keyboard[i]+drives[j]))
                {
                    maximum=(keyboard[i]+drives[j]);
                }
            }
        }
    }
    if(b>=maximum)
    {
        return maximum;
    }
    return maximum;
}
int main()
{
    long int b=0,n=0,m=0;
    cin>>b>>n>>m;
    if((b>=1&&b<=pow(10,6))&&(n>=1&&n<=1000)&&(n>=1&&n<=1000))
    {
        long int keyboard[n],drives[m];
        for(int i=0;i<n;i++)
        {
            cin>>keyboard[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>drives[i];
        }
        cout<<getMoneySpent(b,keyboard,n,drives,m);

        }
    return 0;
}
