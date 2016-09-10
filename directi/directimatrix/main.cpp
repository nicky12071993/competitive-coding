#include <iostream>

using namespace std;



int min(int x, int y)
{
if (x < y)
	return x;
else
	return y;
}

int main()
{
int T;
cin>>T;
while(T--)
{
    int s,t,u,i,j;
    cin>>s;
    int arr[s][s];
int dp[s][s];
    for(t=0;t<s;t++)
    {
        for(u=0;u<s;u++)
        cin>>arr[t][u];
        dp[t][u]=0;
    }

    dp[0][0]=arr[0][0];

	for (j = 1; j < s; j++)
		dp[0][j] = dp[0][j-1] + arr[0][j];
	for (i = 1; i < s; i++){
		for (j = i+1; j < s; j++)
		{
		    if(j-1==i)
			dp[i][j] = dp[i-1][j]+arr[i][j];
			else
			dp[i][j]=min(dp[i-1][j],dp[i][j-1])+arr[i][j];
		}

	}
	dp[s-1][s-1]=dp[s-2][s-1]+arr[s-1][s-1];

        for (j = s-2; j >= 0; j--){
		dp[s-1][j] = dp[s-1][j+1] + arr[s-1][j];
        }
for (i = s-2; i > 0; i--){
		for (j = i-1; j >= 0; j--)
		{
		    if(i-1==j)
			dp[i][j] = dp[i+1][j]+arr[i][j];
			else
			dp[i][j]=min(dp[i+1][j],dp[i][j+1])+arr[i][j];
		}

	}
		dp[0][0]=dp[1][0]+arr[0][0];
		cout<<dp[0][0]<<endl;

}

    return 0;
}
