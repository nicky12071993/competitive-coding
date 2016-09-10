#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int z,int x)
{
    int p;
    if(z<=x)
    p=x;
    else
    p=z;
    return p;
}
int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int maxsofar,d=0;
        maxsofar=a[0];

        int max_ending_here=a[0];
        for(int j=1;j<n;j++)
            {
            max_ending_here= max(a[j],max_ending_here+a[j]);
            maxsofar= max(max_ending_here,maxsofar);
        }
        for(int g=0;g<n;g++)
        {
            if(a[g]>0)
            d+=a[g];
        }
        int y=a[0];
        for(int l=1;l<n;l++)
        {
            if(a[l]>y)
            y=a[l];
        }
        if(maxsofar>0 || d>0)
        cout<<maxsofar<<" "<<d<<endl;
        else
            cout<<y<<" "<<y<<endl;
    }
    return 0;
}
