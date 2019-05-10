#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;
    int x;
    cin>>t;
    int a[100];
    int sum=0;
    while(t--){
        cin>>n>>x;
        sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];

    }
    int e = sum;
    int s = 0;
    int mid = (s+e)/2;
    int ans;
    while(s<=e)
    {
        mid = (s+e)/2;
        int students=1;
        int pages=0;
        for(int i=0;i<n;i++)
        {

            pages+=a[i];
            if(pages>mid)
            {
                students++;
                //pages = a[i];
                i=i-1;
                pages=0;

            }
            if(students>x)
            {

                s = mid+1;
                break;
            }
        }
        if(students<=x)
        {
            ans = mid;
            e = mid-1;
        }


    }
    cout<<ans<<endl;
    }
    return 0;

}
