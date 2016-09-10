#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	int len,p=0;
    	len=(int)s.size();
        char a[len+1];
        for(int i=len-1;i>=0;i--){
        a[p]=s[i];
        p++;
    }
    for(int z=0;z<len;z++)
    cout<<a[z];
    cout<<"\n";

    }
    return 0;
}
