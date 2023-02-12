#include<iostream>
using namespace std;
int main()
{
    int steps,level=0,c=0;
    string path;
    cin>>steps>>path;
    for(int i=0;i<steps;i++)
    {
        if(path[i]=='U')
        {
            level++;
            if(level==0){c++;}
        }
        if(path[i]=='D')
        {
            level--;
        }
    }
    cout<<c;
    return 0;
}
