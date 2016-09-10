#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int choceaten(int money,int each, int wrap)
{
        int q=money/each;
        int wrapsleft=q;
        while(wrapsleft>=wrap)
        {
            int newq=wrapsleft/wrap;
            q=q+newq;
            wrapsleft=wrapsleft%wrap;
            wrapsleft=wrapsleft+newq;
        }
        return q;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        answer = choceaten(n,c,m);
        cout<<answer<<endl;
    }
    return 0;
}
