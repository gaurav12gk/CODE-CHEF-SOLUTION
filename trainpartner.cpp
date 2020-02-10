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
if(n%8==1)
    cout<<n+3<<"LB\n";
else if(n%8==2)
cout<<n+3<<"MB\n";
else if(n%8==3)
    cout<<n+3<<"UB\n";
else if(n%8==7)
cout<<n+1<<"SU\n";
else if(n%8==0)
    cout<<n-1<<"SL\n";
else if(n%8==4)
    cout<<n-3<<"LB\n";
else if(n%8==5)
    cout<<n-3<<"MB\n";
else if(n%8==6)
cout<<n-3<<"UB\n";
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
