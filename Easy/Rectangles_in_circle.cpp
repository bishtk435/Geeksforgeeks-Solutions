#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        int max_area=2*r*r;
        int ans=0;
        for(int i=1;i<=(2*r-1);++i)
        {
            for(int j=1;j<=(2*r-1);++j)
            {
                if((i*j)<=max_area)
                {
                    if(j<=pow(((4*r*r)-i*i),0.5)&&i<=pow(((4*r*r)-j*j),0.5))        
                    ++ans;
                }
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
