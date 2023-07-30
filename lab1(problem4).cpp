#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin>>a,
    cin>>b,
    cin>>c;
    int max=a;
    if (max<b)
        max=b;
    if (max<c)
        max=c;
    cout<<"the max value is:"<<max;
    return 0;
}
