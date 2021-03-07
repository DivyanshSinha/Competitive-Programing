#include <iostream>

using namespace std;

void sieveOfEratosthenes(int limit)
{
    int Nmax = 100000;
    bool isPrime[Nmax];

    for(int i=2; i<=limit ; i++)
    {
        isPrime[i]=true;
    }
    for(int i=2 ; i<=limit/2 ; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*2;j<=limit;j+=i) isPrime[j]=false;
        }
    }

    for(int i=2;i<=limit;i++)
    {
        if(isPrime[i]==true) cout<<i<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter upper limit:"<<endl;
    cin>>n;
    sieveOfEratosthenes(n);
    return 0;
}
