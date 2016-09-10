
#include<iostream>
using namespace std;

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  int x = -1, y = -1;
  for (int i = n / 3; i >= 0;i--)
   if ((n - 3 * i) % 5 == 0)
   {
    x = 3*i;
    y = (n - 3 * i);
    break;
   }
  if (x == -1)
   cout << -1 << endl;
  else
  {
   for (int i = 0; i < x; i++)
    cout << 5;
   for (int i = 0; i < y; i++)
    cout << 3;
   cout << endl;
  }
 }
 return 0;
}
