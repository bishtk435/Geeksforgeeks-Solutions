#include<cstring>
using namespace std;
class Stack
{
    public:
    char stack[100];
    int top;
    void push(char a)
    {
        stack[++top]=a;
    }
    void pop()
    {
        --top;
    }
};
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    char par[100];
	    cin>>par;
	    int len=strlen(par);
	    Stack ob;
	    ob.top=-1;
	    for(int i=0;i<len;++i)
	    {
	        if(par[i]=='{'||par[i]=='('||par[i]=='[')
	            ob.push(par[i]);
	       else
	       {
	           switch(par[i])
	           {
	               case '}':
	                        if(ob.stack[ob.top]!='{')
	                            {
	                                cout<<"not balanced"<<endl;
	                                goto exit_loop;
	                            }
	                        else
	                        {
	                            ob.pop();
	                        }
	                        break;
	               case ')':
	                        if(ob.stack[ob.top]!='(')
	                            {
	                                cout<<"not balanced"<<endl;
	                                goto exit_loop;
	                            }
	                        else
	                        {
	                            ob.pop();
	                        }
	                        break;
	               case ']':
	                        if(ob.stack[ob.top]!='[')
	                         {
	                             cout<<"not balanced"<<endl;
	                            goto exit_loop;
	                         }
	                        else
	                        {
	                            ob.pop();
	                        }
	                        break;
	                        
	           }
	       }
	    }
	        if(ob.top==-1)
	         cout<<"balanced"<<endl;
	         else
	         cout<<"not balanced"<<endl;

	     exit_loop:
	        continue;
	}
	return 0;
}
