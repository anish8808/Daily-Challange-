#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public :
          long long factorial(int N){
            long long fact=1;
            while(N>0)
            {
                fact=fact*N;
                N--;
            }
            return fact ;
          }
};

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int N; cin>>N;
        Solution ob;
        long long res = ob.factorial(N);
        cout<<res<<" ";
    }
    return 0;
}