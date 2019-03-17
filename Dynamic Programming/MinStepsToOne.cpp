//top down approach
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







//bottom up approach
#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mi[100];
    mi[0]=0;
    mi[1]=0;
   
    for(int i=2;i<=n;i++)
    {
        mi[i] = 1+mi[i-1];
        if(i%2==0)
        {
            mi[i] = min(1+mi[i/2],mi[i]);
        }
        if(i%3==0)
        {
            mi[i] = min(1+mi[i/3],mi[i]);
        }
        
    }
    // in the bottom up approach we cannot use three different variables as the for loop is running in the same function so variables already has the values.
    cout<<mi[n];
    return 0;
}
