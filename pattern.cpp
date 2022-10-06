#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   int cpy=i;
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        for(int k=0;k<i;k++,cpy++)
        {   
            cout<<cpy;
        }
        for(int l=2*(i-1);l>=i;l--)
        cout<<l;

        cout<<endl;
    }
    return 0;
}