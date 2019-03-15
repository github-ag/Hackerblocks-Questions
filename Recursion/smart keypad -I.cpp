#include <iostream>
#include<string.h>

using namespace std;
void phone(char arr[][10],char *in,char *out,int i,int j,int k)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out;
        cout<<"\n";
        return;
    }
    if(k==strlen(arr[int(in[i])-48]))
    {
        return;
    }

    out[j]=arr[int(in[i])-48][k];
    phone(arr,in,out,i+1,j+1,0);
    phone(arr,in,out,i,j,k+1);
}

int main()
{
    char arr[10][10]={" ",".+@$","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    char in[10];
    cin>>in;
    char output[10];
    phone(arr,in,output,0,0,0);
    return 0;
}
