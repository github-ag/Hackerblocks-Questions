#include<iostream>
using namespace std;
void move_x(char *in,char*out,int i,int j,int count)
{
    if(in[i]=='\0')
    {
        int k;
        for( k=0;k<count;k++)
        {
            out[j+k]='x';
        }
        out[j+k]='\0';
        cout<<out;
        return;
    }
    if(in[i]=='x')
    {
        count++;
        move_x(in,out,i+1,j,count);
    }
    else
    {
        out[j]=in[i];
        move_x(in,out,i+1,j+1,count);
    }


}
int main()
{
    char in[1000],out[1000];
    cin>>in;
    move_x(in,out,0,0,0);
    return 0;
}
