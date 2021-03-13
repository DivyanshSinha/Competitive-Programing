#include <iostream>

using namespace std;

int maxSumSubarray(int a[],int n)
{
    int ans=a[1],sum=0,l=0,r=n;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        if(sum>ans)
        {
            r=i;
            ans=sum;
        }


        if(sum<0)
        {
            sum=0;
            l=i+1;
        }

    }

    cout<<"Max sum is: "<<ans<<endl<<"from "<<l+1<<" to "<<r+1;
    return 0;
}

int main()
{
    cout<<"Size of array: "<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxSumSubarray(a,n);
    return 0;
}
