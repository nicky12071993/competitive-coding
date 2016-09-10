#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i,j;
        cin>>n;
        int ap[n];
        int sec[n];
        for(i=0;i<n;i++)
        cin>>ap[i];
        sec[0]=ap[0];
        int thekube=0;
        for(j=1;j<n;j++)
        {
            if(sec[j-1]<ap[j]){
                sec[j]=sec[j-1];
                thekube++;
            }
            if(sec[j-1]>ap[j])
            {
                sec[j]=ap[j];

            }

        }
        cout<<thekube<<endl;
    }
    return 0;
}
