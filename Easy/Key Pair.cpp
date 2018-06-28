using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    int count=0;
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	        if(count==0)
	        {
	        for(int j=0;j<i;++j)
	        {
	            if(a[i]+a[j]==x)
	            {
	                ++count;
	            }
	        }
	        }
	    }
	    if(count!=0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
