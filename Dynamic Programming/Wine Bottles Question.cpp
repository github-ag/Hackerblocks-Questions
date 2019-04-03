#include<iostream>
#include<algorithm>
using namespace std;
int memo[100][100];
//top down approach
int bottles(int *arr,int size,int beg,int end,int year=1){
	if(beg>end)
		return 0;
	if(memo[beg][end]!=-1)
		return memo[beg][end];
	int q1 = arr[beg]*year+bottles(arr,size,beg+1,end,year+1);
	int q2 = arr[end]*year+bottles(arr,size,beg,end-1,year+1);
	int ans = max(q1,q2);
	memo[beg][end]=ans;
	return ans;

}
//bottom up approach
int bottles_bu(int *arr,int size){
	int dp[100][100];
	for(int i=0;i<size;i++)
		dp[i][i]=arr[i]*size;
	for(int cnt=1;cnt<size;cnt++)
	{
		int year = size-cnt;
		for(int i=0;i<size-cnt;i++){
			int q1 = (arr[i]*year)+dp[i+1][i+cnt];
			int q2 = (arr[i+cnt]*year)+dp[i][i+cnt-1];
			dp[i][i+cnt]=max(q1,q2);
		}
	}
	return dp[0][size-1];
}
int main(){
	int b[10],s;
	cin>>s;
	for(int i=0;i<s;i++)
		cin>>b[i];
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			memo[i][j]=-1;
		}
	}
	cout<<bottles_bu(b,s);
	return 0;
}
