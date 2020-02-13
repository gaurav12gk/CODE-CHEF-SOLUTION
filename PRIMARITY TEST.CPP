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
bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for (ll p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (ll i=p*p; i<=n; i += p)
				prime[i] = false;
		}
	}

	if (prime[n]==true)
		cout << "yes\n"
		else
            cout<<"no\n";

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
