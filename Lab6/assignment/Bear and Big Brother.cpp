#include<iostream>
using namespace std;
int main()
{
    int x,y,i,z=0;
    cin>>x>>y;

    for(i=0;x<=y;i++)
    {
        x=x*3;
        y=y*2;
        z+=1;
    }
    cout<<z;
}
