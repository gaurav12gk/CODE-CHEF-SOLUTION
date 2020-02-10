#include<iostream>
#include<string>
using namespace std;
int main()
{


int t;
cin>>t;

while(t--)
{
string a;
    int n,k;
int upper=0,lower=0;
cin>>n>>k;
cin>>a;
for(int i=0;i<n;i++)
{
    char x=a[i];
    int p=int(x);
    if(p<=65&&p>=90)
        upper++;
    else lower++;

}
if(upper==lower)
{



if(k>=lower)
    cout<<"both\n";
else if(k<lower)
    cout<<"none\n";
}
else if(lower>upper)
{
    if(k>=lower)
        cout<<"both\n";
    else if(k<upper)
        cout<<"none\n";
    else
        cout<<"chef\n";

}
else if(lower<upper)
{

    if(k>=upper)
        cout<<"both\n";
    else if(k<lower)
        cout<<"none\n";
    else
        cout<<"brother\n";
}


}
}
