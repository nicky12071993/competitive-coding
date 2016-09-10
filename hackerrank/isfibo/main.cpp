#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long memo[100];

void fib()
{
  memo[0]=0;
  memo[1]=1;
  for(long long j=1; j<70; j++)
  {
      memo[j+1]=memo[j]+memo[j-1];
  }

}
int main() {
  for(long long i = 0; i < 100; ++i)
    memo[i] = -1;
      long long t;
    cin >> t;

        fib();
        while (t--)
    {long long n;
        cin >> n;
    int beg=1,end=65;
int mid=(beg+end)/2;
while(beg<=end && memo[mid]!=n)
{
if(memo[mid]<n)
beg=mid+1;
else
end=mid-1;
mid=(beg+end)/2;
}
if(memo[mid]==n)
cout<<"IsFibo"<<endl;
else
cout<<"IsNotFibo"<<endl;
    }
    return 0;
}
