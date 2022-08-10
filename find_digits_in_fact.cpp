#include<bits/stdc++.h>
using namespace std ;
class Solutions
{
  public:
         int digt(int N)
         {
            double digit=0;
            if(N<0)
            return 0;
            if(N<=1)
            return 1;
            for(int i=2; i<=N; i++)
              digit= digit+log10(i);

            return floor(digit+1);          
         }
};

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        Solutions ob;
        int res = ob.digt(n);
        cout<<res<<" ";
    }
    return 0;
}