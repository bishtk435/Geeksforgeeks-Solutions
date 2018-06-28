using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    cin>>n>>p;
	    int a[n];
	    int b=0;
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	        if(b==0)
	        for(int j=0;j<i;++j)
	        {
	            if(a[i]*a[j]==p)
	                ++b;
	        }
	    }
	    if(b==0)
	        cout<<"No"<<endl;
	   else 
	        cout<<"Yes"<<endl;
	}
	return 0;
}
