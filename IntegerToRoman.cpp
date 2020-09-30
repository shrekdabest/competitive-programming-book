#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    int n,i;
    cin>>n;
    string s="";
    char r[][2]={{'M','q'},{'C','D'},{'X','L'},{'I','V'}};
    int n1=3;
    while(n>0)
    {
        
        int x=n%10;
        n=n/10;
        if(x<4)
        {
            while(x--)
            {
                s=r[n1][0]+s;
            }
        }
        else if(x==4)
        {
            s=r[n1][1]+s;
            s=r[n1][0]+s;
        }
        else if(x>=5 &&x<9)
        {
            
            while(x>5)
            {
                s=r[n1][0]+s;
                x--;
            }
            s=r[n1][1]+s;
        }
        else
        {
            s=r[n1-1][0]+s;
            s=r[n1][0]+s;
        }n1--;
    }
    cout<<s<<endl;
    
 
 return 0;
}
