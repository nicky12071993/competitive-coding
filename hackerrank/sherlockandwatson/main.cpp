#include <iostream>

using namespace std;

int main()
{
    int n,k,q,idx;
    cin>>n>>k>>q;
    int a[100000];
    int i,j,m,x,p;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(j=0;j<n;j++)
    {
    x=j+k;
    if(x>n-1)
    x=x%n-1;

    a[x]=a[j];
    }
    for(m=0;m<q;m++)
    {
        cin>>idx;
        cout<<a[idx]<<endl;
    }
    return 0;
}
