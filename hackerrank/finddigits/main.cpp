#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t,digits,p,count;
    cin>>t;
    long long n;
    long long x;
    while(t--)
    {
        cin>>n;
        x=n;
        digits=0;
        while(x!=0)
         {
        x/=10;
        ++digits;
        }

       x=n;
       count=0;


       while(digits--)
        {
            p=x%10;
            if( p!=0 && n%p==0)
                count++;
            x/=10;
        }
        cout<<count<<endl;
    }

    return 0;
}
