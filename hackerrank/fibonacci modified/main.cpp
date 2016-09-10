#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
long long unsigned int a,b,n,i;
cin>>a>>b>>n;
long long unsigned int v[25];
v[0]=a;
v[1]=b;
for(i=2;i<25;i++)
v[i]= (pow(v[i-1],2))+(v[i-2]);
cout<<v[n-1];
    return 0;
}
