#include<iostream>
using namespace std;
int main()
{
    int n,mini=-1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                if(mini>j-i||mini==-1)
                {
                    mini=j-i;
                }
            }
        }
    }
    cout<<mini;
    return 0;
}
