#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;++i)
        {
            count=0;
            for(int j=i+1;j<n;++j)
            {
                if(a[i]<a[j])
                {
                   cout<<a[j]<<" ";
                   ++count;
                   break;
                }
            }
            if(count==0)
            {
                cout<<-1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
