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
int n;
cin>>n;
ll finger[n],g[n];
for(int i=0;i<n;i++)
{
    cin>>finger[i];
}
for(int i=0;i<n;i++)
{

    cin>>g[i];
}
int front=0,back=0;
for(int i=0;i<n;i++)
{
    if(finger[i]<=g[i])
        front++;
}
for(int i=0;i<n;i++)
{
    if(g[n-i-1]>=finger[i])
        back++;
    }
    if((front==n)&&(back==n))
          {
              cout<<"both\n";
          }
          else if(front!=n && back!=n)
            cout<<"none\n";
          else if((front==n)&&(back!=n))
            cout<<"front\n";
          else if((front!=n)&(back==n))
            cout<<"back\n";
}
int main()
{
fast
int t;
cin>>t;
while(t--)
{
solve();
}

}
