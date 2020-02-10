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
bool r[10000];
using namespace std;
int fib(int n)
{

}
void solve()
{
int n;
cin>>n;


r[2]=true;
r[1]=true;
for(inti=3;i<n;i++)
{
    fib=i+fib;
    r[fib]=true;

}

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
