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
string s1,s2;
cin>>s1>>s2;
int i=0,count=0;
int ar[26],br[26];
memset(ar,0,sizeof(ar));

memset(br,0,sizeof(br));
/*if(s1.length()!=s2.length())
    cout<<"NO\n";else
*/
for(int i=0;i<s1.size();i++)
    {
        int p=(int )s1[i];
        int z=(int)s2[i];
        ar[p-97]++;
        br[z-97]++;

    }
    int flag=0;
for(int i=0;i<26;i++)
{
if(ar[i]!=br[i])

        flag++;
}
if(flag==0)
    cout<<"YES\n";
    else cout<<"NO\n";
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
