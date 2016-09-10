#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;

    if (arr[m] == x) return m;  // Check if x is present at mid

    if (arr[m] < x) l = m + 1; // If x greater, ignore left half

    else r = m - 1; // If x is smaller, ignore right half
  }
  return -l; // if we reach here, then element was not present
}

int main()
{
    int n,q,x,k,type;
    cin>>n>>q;
    int a[n];
    int min=9999999,max=-1;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];

    }

    while(q--)
    {
        cin>>x>>k>>type;
    int m,l=0,r=n-1,p=-1;
/*
    while(r >= l )
    {
        m = l + (r-l)/2;
        if(a[m]==x)
            {
            p=m;
            break;
        }
        if( a[m] < x )
            l = m+1;
        else
            r = m-1;
    }*/
    int offlimits=1;
    if(x>a[n-1]) p=n;
    else if(x<a[0]) p=-1;
    else
    {
    p=binarySearch(a,0,n-1,x);
    offlimits=0;
    }

    if(p<0 && k==0)
    {
        cout<<-1<<endl;
        continue;
    }


    if(type==0)
    {
        if(!offlimits && p<0) p=-p-1;
        if(p+k<0 || p+k>n-1)
        cout<<-1<<endl;
        else
        cout<<a[p+k]<<endl;

    }
    if(type==1)
    {
        if(!offlimits && p<0) p=-p;
        if(p-k<0 || p-k>=n)
        cout<<-1<<endl;
        else
        cout<<a[p-k]<<endl;

    }

    }
    return 0;
}
