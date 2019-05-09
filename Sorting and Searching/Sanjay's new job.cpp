#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool mycompare(pair<string,int>p1 , pair<string,int>p2)
{
	if(p1.second==p2.second)
		return p1.first<p2.first;//sorting of strings done lexographically
	else
		return p1.second<p2.second;
}
int main()
{
	int min_salary,n;
	pair<string,int> emp[100];
	cin>>min_salary;
	cin>>n;
	
	string name;
	int salary;
	for(int i=0;i<n;i++)
	{
		cin>>name>>salary;
		emp[i].first=name;
		emp[i].second=salary;

	}
	sort(emp,emp+n,mycompare);
	for(int i=0;i<n;i++)
	{
		if(emp[i].second>=min_salary)
		{cout<<emp[i].first<<" "<<emp[i].second;
		cout<<endl;}
	}
	return 0;
}
