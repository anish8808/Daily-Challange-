/*Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

 

Example 1:

Input:
N = 6
Output: 1
Explanation: The only number less than 6 with 
3 divisors is 4.
Example 2:

Input:
N = 10
Output: 2
Explanation: 4 and 9 have 3 divisors.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function exactly3Divisors() that takes N as input parameter and returns count of numbers less than or equal to N with exactly 3 divisors.

 

Expected Time Complexity : O(N1/2 * N1/4)
Expected Auxilliary Space :  O(1)

 

Constraints :
1 <= N <= 109      */

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public: 
    bool isprime(int n)
    {
        if(n<=1)
        return false;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
    int exactly3Div(int N)
    {
        if(N<=1)
        return 0;
        int count=0;
        for(int i=2; i*i<=N; i++)
        {
             if(isprime(i))
               count++;
        }
        return count;
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
       Solution obj;
       int res = obj.exactly3Div(n);
       cout<<res<<" ";
    }
    return 0;
}