#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,k;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++)
        {
        for(j=0;j<2;j++)
            {
            cin>>a[i][j];
        }
    }
    int b[n];
    for(i=0;i<n;i++)
    b[i]=a[i][0]+a[i][1];
    int c[n];
    for(j=0;j<n;j++)
    c[j]=b[j];
    sort(c,c+n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        if(c[i]==b[j])
        cout<<j+1<<" ";
        }
    }
    return 0;
}
