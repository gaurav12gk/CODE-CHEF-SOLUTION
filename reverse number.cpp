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
{ int a;
cin>>a;
int rev=0,rem=0;
while(a!=0)
{
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;

}
cout<<rev<<endl;

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
