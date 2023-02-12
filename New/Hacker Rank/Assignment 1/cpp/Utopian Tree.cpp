//Utopian Tree
#include<iostream>
using namespace std;
int utopianTree(int n)
{
    int height=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            height=height*2;
        }
        else{height++;}
    }
    return height;
}
int main()
{
    int t=0,n=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<utopianTree(n)<<endl;
    }
    return 0;
}
