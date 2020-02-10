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
int ar[n],br[n];
memset(br,0,sizeof(br));
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}
for(int i=0;i<n;i++)
{
    int max=ar[i];int count=0;
    for(int j=i+1;j<n;j++)
    {
        if(ar[j]>ar[i])
            count++;
    }
    br[i]=count;
}
for(int i=0;i<n;i++)
{
    cout<<br[i]<<" ";

}
cout<<"\n";

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
