//Designer PDF Viewer
#include<iostream>
using namespace std;
int designerPdfViewer(int h[],string word)
{
    char le='a';
    char letters[26];
    for(int i=0;i<26;i++)
    {
        letters[i]=le;
        le++;
    }

    int maximum=0,area=0;
    for(int i=0;i<word.size();i++)
    {
        for(int j=0;j<26;j++)
        {
            if(word[i]==letters[j])
            {
                if(h[j]>maximum)
                {
                    maximum=h[j];
                }
            }
        }
    }
    area=(word.size())*maximum;

    return area;
}
int main()
{
    int h[26];
    string word;
    for(int i=0;i<26;i++)
    {
        cin>>h[i];
    }
    cin>>word;
     if(word.size()<=10)
    {
        int area=designerPdfViewer(h,word);
        cout<<area;
    }

    return 0;
}
