#include<iostream>
using namespace std;
int main()
{
    int n,smax,smin,maximum=0,minimum=0;
    cin>>n;
    int scores[n];
    for(int i=0;i<n;i++)
    {
        cin>>scores[i];
    }
    smax=scores[0];
    smin=scores[0];
    for(int j=1;j<n;j++)
    {
        if(smax<scores[j])
        {
            smax=scores[j];
            maximum++;
        }
        if(smin>scores[j])
        {
            smin=scores[j];
            minimum++;
        }
    }
    cout<<maximum<<" "<<minimum;
    return 0;
}
