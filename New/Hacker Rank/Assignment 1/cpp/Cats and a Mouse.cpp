//Cats and a Mouse
#include<iostream>
using namespace std;
string catAndMouse(int x,int y,int z)
{
    int difx=0,dify=0,win=0;
    difx=z-x;
    dify=z-y;
    if(difx<0)
    {
        difx=-difx;
    }
    if(dify<0)
    {
        dify=-dify;
    }
    if(difx==dify)
    {
        return "Mouse C";
    }
    else if(dify>difx)
    {
        return "Cat A";
    }
    else
    {
        return "Cat B";
    }

}
int main()
{
    int q=0,x=0,y=0,z=0;
    cin>>q;
    if(q>=1 && q<=100)
    {
        for(int i=0;i<q;i++)
        {
            cin>>x>>y>>z;
            cout<<catAndMouse(x,y,z)<<endl;
        }
    }
    return 0;
}
