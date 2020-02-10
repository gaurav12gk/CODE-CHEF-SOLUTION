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
int b;
cin>>b;
int val=0;
if(b==1||b==2||b==3)
    cout<<0<<endl;
else if(b%2==0)
{
    int area=0.5*b*b;
    int res=area-b;
    cout<<res/4<<"\n";

}
else
{

    b=b-1;
    int area=0.5*b*b;
    int res=area-b;
    cout<<res/4<<"\n";

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
