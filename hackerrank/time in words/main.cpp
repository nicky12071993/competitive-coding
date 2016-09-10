#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    while(t--)
        {
            long long n;
            cin >>n;
            long long x;
            x=n/2;
            if(n%2==0)
                cout << x*x <<endl;
            else
                cout << x*(x+1) <<endl;
        }
    return 0;
}
