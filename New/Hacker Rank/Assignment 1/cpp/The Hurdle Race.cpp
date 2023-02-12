//The Hurdle Race
#include<iostream>
using namespace std;
int hurdleRace(int height[],int n,int k)
{
    int maximum=height[0],dif=0;
    for(int i=0;i<n;i++)
    {
        if(height[i]>maximum)
        {
            maximum=height[i];
        }
    }
    if(maximum>k)
    {
        dif=maximum-k;
    }
    return dif;
}
int main()
{
    int n=0,k=0;
    cin>>n>>k;
    int height[n];
    if((n>=1&&n<=100)&&(k>=1&&k<=100))
    {
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        cout<<hurdleRace(height,n,k);
    }

    return 0;
}
