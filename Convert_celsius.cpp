#include<bits/stdc++.h>
using namespace std;

class Solutions
{
    public :
    int function(int c)
    {
        int res = c * 9/5 +32 ;
        return res;
    }
};

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int cel;
        cin>>cel;
        Solutions obj;
        cout<<obj.function(cel)<<endl;
    }
    return 0;
}