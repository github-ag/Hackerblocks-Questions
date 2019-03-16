#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool is_balanced(string s)
{
	stack<char>st;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='('||s[i]=='{'||s[i]=='[')
			st.push(s[i]);
		else if(s[i]==')')
		{
			if(st.top()=='(')
				st.pop();
			else
				return false;
		}
		else if(s[i]=='}')
		{
			if(st.top()=='{')
				st.pop();
			else
				return false;
		}
		else if(s[i]==']')
		{
			if(st.top()=='[')
				st.pop();
			else
				return false;
		}
		
	}
	return true;
}
int main()
{
	string s;
	cin>>s;
	if(is_balanced(s))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
