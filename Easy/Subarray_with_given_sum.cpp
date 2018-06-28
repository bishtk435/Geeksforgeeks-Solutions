using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int a[n];
	    int cs=0;
	    int ii=0,fi=0;
	    int count=0;
	    int isum;
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	        cs+=a[i];
	        if(count==0)
	        {
	            if(cs==s)
	            {
	                ii=0;
	                fi=i;
	                ++count;
	            }
	            else{
	            isum=cs;
	            for(int j=0;j<i;++j)
	            {
	                isum-=a[j];
	                if(isum==s)
	                {
	                    ii=j+1;
	                    fi=i;
	                    ++count;
	                }
	            }
	            }
	        }
	    }
	    if(count!=0)
	    {
	        cout<<ii+1<<" "<<fi+1<<endl;
	    }
	    else 
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
