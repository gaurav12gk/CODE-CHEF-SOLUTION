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
int n,k,v;
cin>>n>>k>>v;
int N[n];
for(int i=0;i<n;i++)
{
    cin>>N[i];
}
int  k1=1;
ll p=v*(n+k),sum=0;
for(int i=0;i<n;i++)
{
    sum+=N[i];
}

int dif=p-sum;
if(dif>0&&(dif%k)==0)
    cout<<dif/k<<"\n";
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
