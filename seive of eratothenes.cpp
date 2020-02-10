#include<bits/stdc++.h>
using namespace std;

int main()
{
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
bool prime[n];
memset(prime,true,sizeof(prime));

for(int a=2;a*a<=n;a++)
{
    if(prime[a]==true)
    {
    for(int j=a*a;j<=n;j+=a)
    {
     prime[j]=false;
    }}
}

for(int i=2;i<=n;i++)
  if(prime[i]==true)
    cout<<i<<" ";

}
