#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[n];
        for(int w=0;w<n;w++)
        cin>>a[w];
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {

            if(a[i]+a[j]==m)
            cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    return 0;
}
