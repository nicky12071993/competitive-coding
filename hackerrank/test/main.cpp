#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    char s[1000];
     for(int w=0;w<1000;w++)
    cin>>s[w];
    int a[150];
    int b[26];
    for(int j=0;j<150;j++)
    a[j]=0;
    for(int u=0;u<25;u++)
    b[u]=0;

    for(int i=0;s[i]!='\0';i++)
    {
        a[s[i]]+=1;
    }

    for(int k=0;k<26;k++)
    b[k]=a[k+65] || a[k+97];

    int flag = 1;
    for(int h=0;h<25;h++)
    {
        if(b[h]==0)
            flag=0;
    }
    if(flag==1)
    cout<<"pangram"<<endl;
    else
    cout<<"not pangram"<<endl;
    return 0;
}
