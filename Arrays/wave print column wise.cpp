#include<iostream>
using namespace std;
int main() {
	int M,N;
	cin>>M>>N;
	int arr[M][N];
	for(int i=0;i<M;i++)
	{for(int j=0;j<N;j++)
	 {
	   cin>>arr[i][j];
	 }
	}
	//output
	int i=-1,j=0;
	while(j<N)
	{
	  i++;
	  for(i=0;i<M;i++)
	  {
	    cout<<arr[i][j]<<", ";
	  }
	  j++;
	  i--;
	  if(j!=N)
	  {while(i>=0)
	   {
	     cout<<arr[i][j]<<", ";
	     i--;
	   }
     j++;
     if(j==N)
     cout<<"END";
	  }
	  else
	  cout<<"END";

	}
	return 0;
}
