#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int len = (int)str.size();
		int i=0,n=0;
        for(i=0;i<len;i++)
        {
        if(str[i]==str[i+1])
        n=n+1;
        else
        n=n;
        }
        cout<<n<<endl;
    return 0;
}
}
