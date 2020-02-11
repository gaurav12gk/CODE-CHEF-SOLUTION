#include<bits/stdc++.h>
#define ll long long int
#define lb long double
#define ull unsigned long long int

#define pb push_back
#define vi vector<int>
# define vs vector < string >
# define vb vector < bool >

# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >


#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
using namespace std;
void solve()
{
int n,k;
cin>>n;
vi v(n);
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.pb(x);
}cin>>k;
int b=v[k-1];
cout<<b;
sort(v.begin(),v.end());


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
