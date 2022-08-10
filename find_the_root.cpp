#include<bits/stdc++.h>
using namespace std;

class Solution{
        public :
                vector<int > roots(int a ,int b ,int c)
                {
                    int d = (pow(b , 2) - 4*a*c);
                    vector<int>ans;
                    int root1=0 , root2=0;
                    if(d<0)
                    ans.push_back(-1);
                    else{
                       root1=floor((-b+sqrt(d))/(2*a));
                       root2=floor((-b-sqrt(d))/(2*a));
                       ans.push_back(max(root1 , root2));
                       ans.push_back(min(root1 , root2));
                    }
                    return ans;
                }
};

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a , b, c;
        cin>>a>>b>>c;
        Solution ob;
        vector<int>root=ob.roots(a,b,c);
        if( root[0]==-1 && root.size()==1)
        {
            cout<<"Imaginary Roots of the Eqations" ;
        }
        else{
            for(int i=0; i<root.size(); i++)
            cout<<root[i]<<" ";
        }
    }
    return 0;
}