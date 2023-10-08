#include<iostream>
using namespace std;
int main()
{
    char s[101];
    int i,lw=0,up=0;
    cin>>s;

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A'&& s[i]<='Z')
            up++;
        else if(s[i]>='a'&& s[i]<='z')
            lw++;
    }


    if(up>lw)
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]- 32;
            }
            cout<<s[i];
        }
    }


    else if(up<lw)
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+ 32;
            }
            cout<<s[i];
        }
    }


    else if(up==lw)
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+ 32;
            }
            cout<<s[i];
        }
    }
}
 
