#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
        int n,a,b;
        cin>>n>>a>>b;
        int x,y,z,ans,i=1;
        x=a*(n-1);
        y=b*(n-1);
        ans=x;
        z=b-a;
        while(ans<y)
            {

            ans=x+(i-1)*z;
            cout<<ans<<" ";
            i=i+1;
            //ans=ans+z;
        }
        cout<<"\n";
    }

    return 0;
}
