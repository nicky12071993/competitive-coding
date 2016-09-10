#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int negative=0,positive=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]<=0)
        negative++;

    }
    if(negative>=k)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
    return 0;
}
