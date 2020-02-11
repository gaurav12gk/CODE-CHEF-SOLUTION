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
int ar[26]={0};
while(n--)
{
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        int p=a[i];
        p=p-97;
        ar[p]++;

    }
}int b[6];
     b[0]=ar[2]/2;
      b[1]=ar[3];
b[2]=ar[4]/2;
b[3]=ar[5];
b[4]=ar[7];
b[5]=ar[14];
sort(b,b+6);
cout<<b[0]<<"\n";
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

