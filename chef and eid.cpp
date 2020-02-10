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
int a;
cin>>a;
int ar[a];
for(int i=0;i<a;i++)

{

    cin>>ar[i];

}int p=0;
sort(ar,ar+a);
while(a--)
{

    cout<<ar[p];
    p++;
}
int dmin=1;
for(int i=0;i<a-1;i++)
{
    int d=ar[i+1]-ar[i];
    if(d<dmin)
        dmin=d;
}
cout<<dmin<<endl;
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
