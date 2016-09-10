#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[10000];
        cin>>s;
        int l=strlen(s);
        if(l%2!=0)
        cout<<-1<<endl;
        else
        {
            int x=l/2;
            int count=0,p;
            int a[150];
            int b[150];
             for(p=0;p<150;p++)
             {
                 a[p]=0;
                 b[p]=0;
             }
            for(p=0;p<x;p++)
            a[s[p]]+=1;
             for(p=x;s[p]!='\0';p++)
             b[s[p]]+=1;
            for(int j=97;j<123;j++)
            {
                a[j]=a[j]-b[j];
            }
            for(int d=97;d<123;d++)
            {
                if(a[d]>0)
                count=count+a[d];
            }
          cout<<count<<endl;
        }

    }
    return 0;
}
