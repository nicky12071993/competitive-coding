#include<iostream>
#include<vector>
#include<math.h>
#include<array>
using namespace std;
int main()
{
   long n,m;
   long answer=0,t;
   cin>>n>>m;
   t = m;
   while(t--){
       long a,b,k;
       cin>>a>>b>>k;
       answer = answer + (abs(a-b)+1)*k;
   }
   answer = floor(answer/n);
   cout<<answer<<endl;
   return 0;
}
