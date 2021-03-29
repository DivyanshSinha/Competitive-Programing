#include <iostream>

using namespace std;
const int Nmax = 100001;

int a[Nmax],n;
bool fr[Nmax];

int longestConsecutiveNumsSubArray()
{
    int ans = 0;
    for(int left=0;left<n;left++)
    {
        for(int i=0;i<n;i++) fr[i]==false;
        int Min=a[left],Max=a[left];
        for(int right=left;right<n;right++)
        {
            if(fr[a[right]]==true) break;
            fr[a[right]]=true;
            Min = min(Min,a[right]);
            Max = max(Max,a[right]);
            if(right-left==Max-Min)
            {
                ans=max(ans,right-left+1);
            }
        }
    }
    return ans;
}

int main()
{
    cout << "Enter length of array :" << endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<longestConsecutiveNumsSubArray();
    return 0;
}
