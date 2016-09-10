#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,lol,j,p,m,swap=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b[n];
    for(int y=0;y<n;y++)
        b[y]=a[y];
   sort(b, b+n,greater<int>());
    for(j=0;j<n;j++)
        {
        if(a[j]!=b[j])
            {
            p=a[j];
            a[j]=b[j];
            for(m=j+1;m<n;m++)
                if(a[j]==a[m])
                {
                a[m]=p;
                swap++;
            }

        }
        if(swap==k)
            break;
    }
    for(int d=0;d<n;d++)
    cout<<a[d]<<" ";
    return 0;
}
