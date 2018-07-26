#include<iostream>
#include<cstring>
using namespace std;
class Stack
{
    public:
        int stack[30];
        int top;
        void push(char a)
        {
            stack[++top]=a;
        }
        void pop()
        {
            if(stack[top]!='('&&stack[top]!=')')
                cout<<(char)stack[top];
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
	    char exps[30];
	    cin>>exps;
	    Stack op;
	    op.top=-1;
	    int len=strlen(exps);
	    for(int i=0;i<len;++i)
	    {
	        if(exps[i]!='^'&&exps[i]!='*'&&exps[i]!='/'&&exps[i]!='+'&&exps[i]!='-'&&exps[i]!='('&&exps[i]!=')')
	            cout<<exps[i];
	        else if(op.top==-1)
	            op.push(exps[i]);
	       else if(op.stack[op.top]=='(')
	            op.push(exps[i]);
	       else if(exps[i]=='(')
	            op.push(exps[i]);
	       else if(exps[i]==')')
	       {
	           while(op.stack[op.top]!='(')
	                op.pop();
	           op.pop();
	       }
	       else 
	       {
	           switch(exps[i])
	           {
	               case '^':
	                        op.push(exps[i]);
	                        break;
	               case '*':
	               case '/':
	                        if(op.stack[op.top]=='^'||op.stack[op.top]=='*'||op.stack[op.top]=='/')
	                        {
	                            op.pop();
	                            op.push(exps[i]);
	                        }
	                        else
	                        {
	                            op.push(exps[i]);
	                        }
	                        break;
	               case '+':
	               case '-':
	                        op.pop();
	                        op.push(exps[i]);
	                        break;
	               
	           }
	       }
                
	    }
	    while(op.top!=-1)
	    {
	        op.pop();
	    }
	    cout<<endl;
	}
  return 0;
 }
