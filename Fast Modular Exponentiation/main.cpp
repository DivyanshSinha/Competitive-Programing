#include <iostream>

using namespace std;

int fastExpo(int a , long long n , int mod)
{
    if(n==0) return 1;

    if(n%2==0) return fastExpo((1LL*a*a)%mod,n/2,mod);

    return (1LL*a*fastExpo(a,n-1,mod))%mod;
}

int main()
{
    int a,n,mod;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter exponent: ";
    cin>>n;
    cout<<"Enter mod: ";
    cin>>mod;
    cout<<fastExpo(a,n,mod);
    return 0;
}
