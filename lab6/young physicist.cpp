#include<iostream>
using namespace std;
int main()
{
    long long n,i,s1,s2,s3;
    long long sum1=0,sum2=0,sum3=0;
    cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>s1;
       cin>>s2;
       cin>>s3;

       sum1+=s1;
       sum2+=s2;
       sum3+=s3;
   }

   if(sum1==0 && sum2==0 && sum3==0)
       cout<<"YES";
       else
        cout<<"NO";
}
