
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
{int n,k;
cin>>n>>k;
int ar[n];

for(int i=0;i<n;i++)
{
    cin>>ar[i];
    }
    int total=0;
    for(int i=0;i<=n-k;i++)
    {
int sum=0;
        for(int j=i;j<i+k;j++)
        {
    sum+=ar[j];
           }
             if(total<sum)
                total=sum;
    }
    cout<<total<<endl;

}



int main()
{
fast
int t;
cin>>t;
while(t--)
{
solve();
}

}
