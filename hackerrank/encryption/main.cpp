#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int l,r,c,i;
    l=s.length();
    r=floor(sqrt(l));
    c=ceil(sqrt(l));
    for(int j=0;j<=r;j++)
    {
    i=j;
    while(i<l)
    {

        cout<<s[i];
        i=i+c;
    }
    cout<<endl;
    }
    return 0;
}
