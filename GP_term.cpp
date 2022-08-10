#include<bits/stdc++.h>
using namespace std;

class Solution {
         public :
                double gp_term(int A , int B ,int n)
                {
                   if(n==1)
                   return A;
                   if(n==2)
                   return B;
                   double ratio = floor(B)/floor(A);
                   double cal = A*pow(ratio , n-1);
                   return cal;
                }
                 
};
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a , b , n;
        cin>>a>>b>>n;
        Solution ob;
        
        cout<<floor(ob.gp_term(a,b,n))<<" ";
    }
    return 0;
}