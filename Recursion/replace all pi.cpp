#include <iostream>
#include<string.h>

using namespace std;
void inc_index(char *a,int n,int i)
{
    if(n==i+1)
        return;
    a[n+2]=a[n];
    inc_index(a,n-1,i);

    return;

}
void print(char *arr,int len)
{

  for(int j=0;j<len-1;j++)
    {
        if(arr[j]=='p'&&arr[j+1]=='i')
        {
            inc_index(arr,len-1,j);
            arr[j]='3';
            arr[j+1]='.';
            arr[j+2]='1';
            arr[j+3]='4';
            len=len+2;

        }
    }
    arr[len]='\0';
    cout<<arr<<endl;
}
int main()
{

    int n,len;
    cin>>n;
    char arr[1000];
    for(int j=0;j<n;j++)
    {
        cin>>arr;
        len=strlen(arr);
        print(arr,len);
    }
    return 0;
}
