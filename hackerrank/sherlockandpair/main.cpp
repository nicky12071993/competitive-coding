
#include<iostream>
using namespace std;

int main()
{
	int t;
	long long n,cnt,tmp,max,min;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long ar[1000007]={0};
		cnt=0;
		max=0;
		min=1000000;
		for(long long i=0;i<n;i++)
		{
			cin>>tmp;
			ar[tmp]+=1;

		}
		for(long long i=1;i<=1000000;i++)
		{
			if(ar[i]>=2)
			{
				cnt+=ar[i]*(ar[i]-1);
			}
		}
		cout<<cnt<<endl;

	}
return 0;
}
