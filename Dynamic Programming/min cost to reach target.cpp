#include<iostream>
#include<algorithm>
using namespace std;
//top down approach
int memo[100][100];
int min_cost(int arr[10][10],int size,int target,int i=0,int j=0){
	if(arr[i][j]==target)
		return 0;
	if(memo[i][j]!=-1)
		return memo[i][j];
	int q1=1000,q2=1000;
	if(j<size-1)
	q1= arr[i][j]+min_cost(arr,size,target,i,j+1);
	if(i<size-1)
	q2= arr[i][j]+min_cost(arr,size,target,i+1,j);
	memo[i][j] = min(q1,q2);
	return memo[i][j];


}
//bottom up approach
int min_cost_bu(int arr[10][10],int size,int target){
	int dp[100][100];
	dp[size-1][size-1] = arr[size-1][size-1];
	dp[size-2][size-1] = arr[size-2][size-1];
	dp[size-1][size-2] = arr[size-1][size-2];
	int q1,q2;
	for(int i=size-1;i>=0;i--){
		for(int j=size-i-1;j>=0;j--){
			q1=1000,q2=1000;
			if(i<size-1){
				q1=arr[i][j]+dp[i+1][j];

			}
			if(j<size-1){
				q2 = arr[i][j]+dp[i][j+1];
			}
			dp[i][j]=min(q1,q2);

		}
	}
	return dp[0][0];

}
int main(){
	int s,arr[10][10],target;
	cin>>s;
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++)
			memo[i][j]=-1;
	}
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			cin>>arr[i][j];
		}
	}
	cin>>target;
	cout<<min_cost_bu(arr,s,target);
	return 0;

}
