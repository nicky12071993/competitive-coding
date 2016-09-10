#include <iostream>

using namespace std;

int main()
{
    int n,sj;
    cin>>n>>sj;
    int sr[n];
    for(int i=0;i<n;i++)
    cin>>sr[i];
    int count=0;
    for(int j=0;j<=n;j++)
    {
        if(sr[j]<sj)
        count++;
        else
        break;
    }
     for(int k=count+1;k<=n;k++)
    {
        if(sr[k]<sj)
        count++;
        else
        break;
    }
    cout<<count<<endl;
    return 0;
}
