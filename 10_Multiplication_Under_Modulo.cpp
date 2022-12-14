/*You are given two numbers a and b. You need to find the multiplication of a and b under modulo M (M as 109+7).

Example 1:

Input:
a = 92233720368547758
b = 92233720368547758
Output: 484266119
Explanation: Multiplication of a and b 
under modulo M will be 484266119.
Example 2:

Input:
a = 1000000007
b = 1000000007
Output: 0
Explanation: Multiplication of a and b
under modulo M is 0.
Your Task:
You don't need to read input or print anything. Your task is to complete the function multiplicationUnderModulo() that takes a and b as parameters and returns multiplication of a and b under modulo M.

Expected Time Complexity : O(1)
Expected Auxilliary Space :  O(1)

Constraints:
1 <= a,b <= 263-1

*/

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        long long res = ((a%1000000007)*(b%1000000007))%1000000007;
        return res;
        
    }
};

int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	
	    cin>>a>>b;
	    Solution ob;

	    cout<<ob.multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}  