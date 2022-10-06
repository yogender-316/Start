#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    /*for(int i=1;i<=n;i++)
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
    }*/
    /*for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=i;j++)
        cout<<j;
        for(int k=2*(n-i);k>0;k--)
        cout<<" ";
        for(int l=i;l>=1;l--)
        cout<<l;

        cout<<endl;
    }*/

    for(int i=0;i<(n+1)/2;i++)
    {
        for(int j=0;j<i;j++)
        cout<<" ";
        for(int k=0;k<=i;k++)
        cout<<"* ";

        cout<<endl;
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=(n/2)-1;j>i;j--)
        cout<<" ";
        for(int k=(n/2)-1;k>=i;k--)
        cout<<"* ";

        cout<<endl;
    }








    

    return 0;
}