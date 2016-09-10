#include <iostream>
#include <cstdio>
#include <climits>
#include <cstring>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;
ll t, n, k, p;
ll A[1005], B[1005], sec[1005][300];

ll follow(ll i, char stairway) {
    if(i >= n){
    	return 0;
    }
    if(i == n-1){
    	return stairway == 'a' ? A[i] : B[i];
    }
    if(n == 1){
    	return min(A[0], B[0]);
    }

    if(sec[i][stairway] != 1000000000){
    	return sec[i][stairway];
    }
    ll take = 1000000000;
    ll leave = 1000000000;
    if(stairway == 'a') {
    	for(int j=1;j<=k;j++){
    		if(i+j < n)
    			leave = min(leave, A[i] + follow(i+j, 'a'));
    	}
    	for(int j=1;j<=k;j++){
    		if(i+j < n)
    			take = min(take, A[i] + p + follow(i+j, 'b'));
    	}

        return sec[i][stairway] = min(take, leave);
    }
    else {
    	for(int j=1;j<=k;j++){
    		if(i+j < n)
    			leave = min(leave, B[i] + follow(i+j,'b'));
    	}
        for(int j=1;j<=k; j++){
        	if(i+j < n)
          		take = min(take, B[i] + p + follow(i+j,'a'));
        }
        return sec[i][stairway] = min(take, leave);
    }
}



int main(){
	cin>>t;
	while(t--){
		cin>>n>>k>>p;
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0;i<n;i++){
			cin>>B[i];
		}
		for(int i=0;i<=n;i++){
			for(int j=0;j<=300;j++){
				sec[i][j] = INT_MAX;
			}
		}
		ll solve = min(follow(0, 'a'), follow(0, 'b'));
		cout<<solve<<endl;
	}
	return 0;
}
