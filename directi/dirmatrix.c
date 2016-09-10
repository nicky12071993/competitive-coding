#include <iostream>

using namespace std;
int minn(int l,int r)
{
    if(l<r) return l;
    else return r;

}
int main()
{
int T;
cin>>T;
while(T--)
{
    int i,j,k,n,res;
    cin>>n;
    int arr[n][n];
    int sum[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
            sum[i][j]=0;
        }

    }
    sum[0][0]=arr[0][0];

    for(i=1;i<n;i++)
    {
        sum[0][i]=sum[0][i-1]+arr[0][i];
    }

    for(k=1;k<n;k++)
    {
        //for(i=k;i<n;i++)
        //{
        i=k;
        //cout<<"at row "<<i<<endl;
            for(j=k+1;j<n;j++)
            {
                //cout<<"at cell "<<i<<' '<<j<<endl;
                if(j-1==k)
                    sum[i][j]=sum[i-1][j]+arr[i][j];
                else
                    sum[i][j]=minn(sum[i-1][j],sum[i][j-1])+arr[i][j];
                    //cout<<"Got "<<sum[i][j]<<"at "<<i<<' '<<j<<endl;
            }
        //}
    }
    sum[n-1][n-1]=sum[n-2][n-1]+arr[n-1][n-1];
    res=sum[n-1][n-1];
    //cout<<res<<endl;
    for(i=n-2;i>=0;i--)
    {
        sum[n-1][i]=sum[n-1][i+1]+arr[n-1][i];
    }
    for(k=n-2;k>=1;k--)
    {
        //for(i=k;i>=0;i--)
        //{
        i=k;
            for(j=k-1;j>=0;j--)
            {
                if(j+1==k)
                    sum[i][j]=sum[i+1][j]+arr[i][j];
                else
                    sum[i][j]=minn(sum[i+1][j],sum[i][j+1])+arr[i][j];
            }
        //}
    }
    sum[0][0]=arr[0][0]+sum[1][0];
    res+=sum[0][0];
    //cout<<res<<endl;
    cout<<sum[0][0]<<endl;
}
return 0;
}
