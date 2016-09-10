#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    long long int p, q, dum, b, c, count = 0;
    cin >> p >> q;
    for( long long int i = p; i <= q; i ++){
        dum = i * i;
        string a = to_string(dum);
        b = 0;
        for(int j = 0; j < (a.length() / 2); j++){
            b = b * 10 + ( a[j] - '0' );
        }
        c = 0;
        for(int k = a.length() / 2; k < a.length(); k++){
            c = c * 10 + ( a[k] - '0' );
        }
        if( b + c == i ){
            count++;
            cout << i << " ";
        }
    }
    if( count == 0 ){
        cout <<  "INVALID RANGE";
    }
    return 0;
}
