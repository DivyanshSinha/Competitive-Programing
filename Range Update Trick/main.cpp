#include <iostream>

using namespace std;
int a[5000],b[5000],s[5000],n;

void update(int x,int y,int val)
{
    b[x-1]+=val;
    b[y]-=val;
}
void buildFinalArray()
{
    int i;
    for(i=0;i<n;i++)
    {
        s[i]=s[i-1]+b[i];
        a[i]+=s[i];
    }
}

int main()
{
    int x,y,val;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    cout << "Enter upper limit: " << endl;
    cin>>x;
    cout << "Enter lower limit: " << endl;
    cin>>y;
    cout << "Enter value to be incremented: " << endl;
    cin>>val;
    update(x,y,val);
    buildFinalArray();
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
