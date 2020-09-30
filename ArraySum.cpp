#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;
     cin>>n;
     int  a[n];
     int sum =0,x;
     
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         sum+=a[i];
         
     }
     cout<<sum<<endl;
	// your code goes here
	return 0;
}
