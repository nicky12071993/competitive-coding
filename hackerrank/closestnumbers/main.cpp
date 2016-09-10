#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
        cin>>a[i];
       std::sort(a,a+n);
       long long int p=a[1]-a[0];
       long long int x,y;
       for(long long int j=0;j<n-1;j++)
       {
           x=a[j+2]-a[j+1];
           if(x<p)
           p=x;
       }
        for(long long int k=0;k<n-1;k++)
       {
           y=a[k+1]-a[k];
           if(y==p)
           cout<<a[k]<<" "<<a[k+1]<<" ";
       }

    return 0;
}
