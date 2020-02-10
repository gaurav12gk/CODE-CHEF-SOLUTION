#include<bits/stdc++.h>
#define ll long long int
#define lb long double
#define ull unsigned long long int

#define vi vector<int>
# define vs vector < string >
# define vb vector < bool >

# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >


# define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
using namespace std;
void solve()
{

string a;
cin>>a;
int flag=0;
for(int i=0;i<a.length();i++)
{
    if(a[i]=='C')
    {
        if(a[i+1]=='E'||a[i+1]=='C'||a[i+1]=='S')
        { flag++;
        }

    }
    else if(a[i]=='E')
    {
        if(a[i+1]=='E'||a[i+1]=='S')
        {
            flag++;

    }}
    else if(a[i+1]=='S')
    {

        if(a[i+1]=='S')
           {

            flag++;
    }}
    }
if(flag==a.length()-1)
cout<<"no\n";
else cout<<"yes\n";
}

int main()
{fast
int t;
cin>>t;
while(t--)
{
solve();
}

}
