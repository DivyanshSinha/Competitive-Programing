#include <iostream>

using namespace std;

int s[10000];

void buildPartialSum(int a[],int n)
{
    s[0]=a[0];
    for(int i=1;i<n;i++)
    {
        s[i]=s[i-1]+a[i];
    }
}

long long Query(int x , int y)
{
    return s[y-1]-s[x-2];
}

int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter your array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    buildPartialSum(arr,n);
    int x,y;
    cout<<endl<<"Enter upper limit :"<<endl;
    cin>>x;
    cout<<endl<<"Enter lower limit :"<<endl;
    cin>>y;
    cout<<Query(x,y);
    return 0;
}
