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
 ll a;
 cin>>a;
 int z=a;
 if(a%10==0)
    cout<<0<<"\n";
 else if(a%5==0)
 cout<<1<<"\n";
 else
    cout<<-1<<"\n";

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
