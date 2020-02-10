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
int bflag1=0,bflag2=0;
int oflag1=0,oflag2=0;
for(int i=0;i<3;i++)
{
    if(s1[i]=='b')
        bflag1++;
        if(s1[i]=='o')
            oflag1++;

    if(s2[i]=='b')
        bflag2++;
        if(s2[i]=='o')
            oflag2++;

}
if(bflag1==3&&(oflag2>=1))
    cout<<"YES\n";
    else cout<<"NO";

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
