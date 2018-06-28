using namespace std;
int main()
 {
	    int t;
	    cin>>t;
	    while(t--)
	    {
	    int n;
	    cin>>n;
	    int a[n][n];
	    int row[100],col[100];
	    for(int i=0;i<100;++i)
	    {
	        row[i]=-1;
	        col[i]=-1;
	    }
	    int ai=0;
	    for(int i=0;i<n;++i)
	    {
	        for(int j=0;j<n;++j)
	        {
	            cin>>a[i][j];
	            if(a[i][j]==0)
	            {
	                row[ai]=i;
	                col[ai]=j;
	                ++ai;
	            }
	                    
	        }
	    }
	    for(int i=0;i<100;++i)
	    {
	        if(row[i]!=-1)
	        {
	            for(int j=0;j<n;++j)
	            {
	                a[row[i]][j]=0;
	            }
	        }
	        if(col[i]!=-1)
	        {
	            for(int j=0;j<n;++j)
	            {
	                a[j][col[i]]=0;
	            }
	        }
	    }
	    for(int i=0;i<n;++i)
	    {
	        for(int j=0;j<n;++j)
	        {
	            cout<<a[i][j]<<" ";     
	        }
	    }
	    
	    cout<<"\n";
	    
	    }

	return 0;
}
