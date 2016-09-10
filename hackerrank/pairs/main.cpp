#include <iostream>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    for(int p=0;p<n;p++)
    cin>>a[p];
    sort(a,a+n);
   for(int q=0;q<n;q++)
       {
       if(binary_search(a,a+n,a[q]+k))
           count++;
   }
    cout<<count<<endl;
    return 0;
}
