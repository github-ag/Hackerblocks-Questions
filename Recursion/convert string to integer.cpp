#include<iostream>

using namespace std;
void string_to_int(char *a,int i,int num)
{
    if(a[i]=='\0')
    {
        cout<<num;
        return;
    }
    num = num*10+(a[i]-'0');
    string_to_int(a,i+1,num);
}
int main()
{
    char a[20];
    cin>>a;
    string_to_int(a,0,0);
    return 0;
}
