#include <iostream>
#include<string.h>
#include<math.h>
#include<stack>
using namespace std;
stack<string>s;
void subsequences(char *in,char *out,int i,int j)//as we cannot excess the starting index we have to pass the array from the input
{
    if(in[i]=='\0')
    {
        out[j] = '\0';
        s.push(out);
        return;
    }
    out[j] = in[i];
    subsequences(in,out,i+1,j+1);
    subsequences(in,out,i+1,j);

}


int main()
{
    char l[100];
    cin>>l;
    int n=strlen(l);
    n=pow(2,n);
    

    char temp[100];
    subsequences(l,temp,0,0);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl<<n;
    return 0;
}
