#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,k,l;
    int a[1000];
    cin>> n;
    for(i=0;i<n;i++)
        cin>> a[i];
    int min=0,count=0;
    cout<<n<<endl;
while(count!=1)
{
           //finding min
        for(i=0;i<n;i++)
            if(a[i]!=0)
            {
            min=a[i];
            break;
            }
         for(i=0;i<n;i++)
            if(a[i]>0 && a[i]<min)
            min=a[i];
//finding min
//subtract
          for(i=0;i<n;i++)
          {
            if(a[i]!=0)
            a[i]=a[i]-min;
          }
            count=0;
            for(i=0;i<n;i++)
            if(a[i]!=0)
            count++;
            cout << count <<endl;
}



    return 0;
}
