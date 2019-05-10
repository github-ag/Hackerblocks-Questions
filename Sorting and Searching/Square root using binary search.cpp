#include<iostream>
#include<math.h>
using namespace std;
float squareroot(int n,int p)
{
	int s = 0, e = n-1;
	int mid = (s+e)/2;
	float  ans;
	while(s<=e)
	{
		mid = (s+e)/2;
		if(pow(mid,2)<=n)
		{
			ans = mid;
			s = mid+1;
		}
		else
			e = mid-1;
	}
	for(float inc = 0.1;inc>=pow(0.1,p+1);inc=inc*0.1)
    {
        for(int i=1;i<=9;i++)
        {
            if(pow((ans+inc),2)<n)
                ans = ans + inc;
            else
                break;
        }

    }

	return ans;

}
int main()
{
	int n,p;
	cin>>n;
	cin>>p;
	cout<<squareroot(n,p);
	return 0;
}
