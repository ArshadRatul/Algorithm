//A very Big sum
#include<iostream>
using namespace std;
int main()
{
    int n=0;
    long int sum=0;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}
