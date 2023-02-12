//Mini-Max Sum
#include<iostream>
using namespace std;
void miniMaxSum(long int arr[],int a)
{
    long int maximum=arr[0],minimum=arr[0];
    long int minsum=0,maxsum=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]<minimum)
        {
            minimum=arr[i];
        }
        if(arr[i]>maximum)
        {
            maximum=arr[i];
        }
    }
    if(maximum==minimum){a--;}
    for(int i=0;i<a;i++)
    {
        if(arr[i]!=maximum)
        {
            minsum=minsum+arr[i];
        }
        if(arr[i]!=minimum)
        {
            maxsum=maxsum+arr[i];
        }
        if(maximum==minimum)
        {
            maxsum=maxsum+arr[i];
            minsum=maxsum;
        }
    }
    cout<<minsum<<" "<<maxsum;
}
int main()
{
    long int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    miniMaxSum(arr,5);
    return 0;
}
