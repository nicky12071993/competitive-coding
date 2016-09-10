#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int w[n];
    for(int i=0;i<n;i++)
    cin>>w[i];
    sort(w,w+n);
    int counter=1,lol=0,k;
    for(int j=0;j<n;j++)
    {

        for(k=j+1;k<n;k++)
        {
            if(w[k]>w[j]+4)
            {
                counter++;
                break;
            }
        }
        j=k-1;
    }
    cout<<counter<<endl;
    return 0;
}
