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
	        cin>>a[i];
	    int k,r_index=-1;
	    cin>>k;
	    for(int i=0;i<n;++i)
	    {
	        if(a[i]==k)
	        {
	            r_index=i;
	            break;
	        }
	    }
	    cout<<r_index<<endl;
	}
	return 0;
}
