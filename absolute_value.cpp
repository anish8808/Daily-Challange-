#include<bits/stdc++.h>
using namespace std;

class Solution{
    int absolute(int I)
    {
        if(I>0)
        return I;
        else
        return -I;

    }
};

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int i ;
        cin>>i;
        Solution ob ;
        cout<<ob.absolute(i)<<endl;
    }

 return 0;
}