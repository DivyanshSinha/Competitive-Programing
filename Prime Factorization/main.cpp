#include <iostream>
using namespace std;

int f[100],expo[100],len;

void prime_fact(int n)
{
    if(n==1)
    {
        len++;
        f[len]=2;
        expo[len]=0;
        return;
    }

    int d=2;

    while(n>1 && d*d<=n)
    {
        int k=0;
        while(n%d==0)
        {
            n/=d;
            k++;
        }
        if(k>0)
        {
            len++;
            f[len] = d;
            expo[len] = k;
        }
        d++;
    }
    if(n>1)
    {
        len++;
        f[len]=n;
        expo[len]=1;
    }
}

int main()
{
    int n;
    cout<<"Enter a real number:"<<endl;
    cin>>n;
    prime_fact(n);
    for(int i=1;i<=len;i++)
    {
        cout<<f[i]<<"^"<<expo[i]<<endl;
    }
    return 0;
}
