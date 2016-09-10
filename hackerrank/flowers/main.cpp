/* Sample program illustrating input/output */
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(void){



//Helpers for input and output

   int N, K;
   cin >> N >> K;
    int C[N];
   for(int i = 0; i < N; i++){
      cin >> C[i];
   }
   sort(C, C+N,greater<int>());
   int result=0,r=0;
    for(int z=0;z<N;z++)
        {

        r=z/K;
        result+=C[z]*(r+1);
    }
   cout << result << "\n";

   return 0;
}
