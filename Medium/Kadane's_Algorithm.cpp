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
	    cin>>a[0];
	    int max_sum=a[0];
	    int i_sum;
	    int sum=a[0];
	    for(int i=1;i<n;++i)
	    {
                cin>>a[i];
	            sum+=a[i];
	            if(max_sum<sum)
	            {
	                 max_sum=sum;
	            }
	            i_sum=sum;
	        for(int j=0;j<i;++j)
	        {
	            i_sum-=a[j];
	            if(max_sum<i_sum)
	            {
	                max_sum=i_sum;
	            }
	        }
	    }
	    cout<<max_sum<<endl;
	}
	return 0;
}
