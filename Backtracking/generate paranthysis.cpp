#include<iostream>

#include<string>

#include<set>

#include<stack>

using namespace std;



set<string> s;



void generateParenthesis(string str,int n,int open,int close) {

    if(close >= n) {

      s.insert(str);

      return;

    }

    if(open < n) {

        generateParenthesis(str + '(',n,open + 1,close);

    }

    if(close < open) {

        generateParenthesis(str + ')',n,open,close + 1);

    }

    return;

}



int main() {

  int n;

  cin>>n;

  generateParenthesis("",n,0,0);

  stack<string> stk;

  for(string str : s) {

    stk.push(str);

  }

  while(!stk.empty()) {

    string curr = stk.top();

    cout<<curr<<endl;

    stk.pop();

  }

  return 0;

}
