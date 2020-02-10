#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
cin.tie(0);
cout.tie(0);

int a;
string s;
cin>>a;
s=to_string(a);
int flag=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
        {
                     i=i+2;
                flag=1;
         }
          else if(s[i]=='1'&&s[i+1]=='4')
         {
             i=i+1;
             flag=1;


         }
         else if(s[i]=='1')
         {
             flag=1;
             continue;

         }
              else {flag=0;
              break;}
              }

if(flag==0)
    cout<<"NO";
else cout<<"YES";

}
