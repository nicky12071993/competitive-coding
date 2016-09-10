#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
   long long sum=0,c;
   int a=0,b=1;
   long long limit;
   cin>>limit;
   while(a+b<limit)
   {
   	c=a+b;
   	a=b;
   	b=c;
   	if(c%2==0)
   	sum=sum+c;

   }
   cout<<sum<<endl;
	}
    return 0;
}
