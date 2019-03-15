#include<iostream>
using namespace std;
void duplicate(char *in, char *out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out;
        return;
    }
    if(in[i+1]==in[i])
    {
        out[j]=in[i];
        out[++j]='*';
    }
        
    
    else
    {
        out[j]=in[i];
        
    }
    duplicate(in,out,i+1,j+1);
    return;



}
int main()
{
    char in[20];
    cin>>in;
    char out[20];
    duplicate(in,out,0,0);
    return 0;
}
