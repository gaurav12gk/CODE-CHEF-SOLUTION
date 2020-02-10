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
string a;
cin>>a;
if(n%2==0)
{
    for(int i=0;i<n-1;i+=2)
    {

        swap(a[i],a[i+1]);
    }
}
else
{
    for(int i=0;i<n-2;i+=2)
    {

        swap(a[i],a[i+1]);
    }
}
int r=110;
for(int i=0;i<n;i++)
{
    int p=a[i];
        if(p<r)
    {
        int d=r-p;
        int f=(d*2)-1;
        a[i]=a[i]+f;

    }
    else if(r<p)
    {
        int d=p-r;
        int f=(d*2)+1;
        a[i]=a[i]-f;

    }
    else if(r==p)
    {
        a[i]=a[i]-1;
    }
}
cout<<a<<"\n";
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
