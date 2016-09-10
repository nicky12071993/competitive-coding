#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,i;
    int a[1000]= { 0, };
    cin>> n;
    for(i=0;i<n;i++)
        cin>> a[i];
    int min=0,count=0;

     sort(a,a+n);
    while(1)
{
         count=0;
            for(i=0;i<n;i++)
            if(a[i]!=0)
            count++;
                if(count!=0)
            cout << count <<endl;
           //finding min

     for(i=0;i<n;i++)
     {
     if(a[i]!=0)
            {
            min=a[i];
            break;
            }
 }
//finding min
//subtract
          for(i=0;i<n;i++)
          {
            if(a[i]!=0)
            a[i]=a[i]-min;
          }

}
    return 0;
}
