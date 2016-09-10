#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    int i,p,x;
    char s[10000];
    while(t--)
    {
        for(i=0;i<t;i++)
            cin>> s[i];
        p=0;
        x=s.length();
        for(i=0;i<x/2;i++)
            p=p+fabs(s[i]-s[x-1-i])
            cout<<p<<endl;
    }
    return 0;
}
