#include<iostream>
#include<algorithm>
using namespace std;
int mi[100]={0};
int ms(int n)
{
    if(mi[n]!=0)
        return mi[n];
    if(n<=3)
    return 1;
    int subone = 1+ms(n-1);
    int divtwo = 1+ms(n/2);
    int divthree = 1+ms(n/3);
    return mi[n]=min(subone,min(divtwo,divthree));

}
int main()
{
    int n;
    cin>>n;
    cout<<ms(n);
    return 0;
}
