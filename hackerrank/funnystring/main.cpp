#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    int t,c,n;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        n=0;
        n=s.length();
        c=1;
        for(int i=1;i<n;i++)
        {
            if(abs(s[i]-s[i-1])==abs(s[n-1-i]-s[n-i]))
            c++;
        }
        if(c==n)
        cout<<"funny"<<endl;
        else
        cout<<"not funny"<<endl;
    }
    return 0;
}
