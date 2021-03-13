#include <iostream>

using namespace std;

const int Nmax = 10001;

long long maxSumSubArray(int a[],int n)
{
    int S[Nmax],ans=a[1],minS=0,i,l,r;
    S[1]=a[1];

    for(i=1;i<n;i++) S[i]=S[i-1]+a[i]; /// building sum array

    for(i=0;i<n;i++)
    {
        if(S[i]-minS>ans)
        {
            ans = S[i]-minS;
            r=i;
        }

        if(S[i]<minS)
        {
            minS = S[i];
            l=i+1;
        }
    }

    cout<<"Max sum is: "<<ans<<endl<<"(l,r) = "<<l+1<<","<<r+1;
}

int main()
{
    cout << "Enter size of array: " << endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the array: "<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    maxSumSubArray(a,n);
    return 0;
}
