#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int cnt=0;

void num(char *input,char key[][10],int i)
{
	if(input[i]=='\0')
	{
	   
		cnt++;
		return;
	}
    int k=0;
	while(key[int(input[i])-48][k]!='\0')
	{
	
		
	   num(input,key,i+1);
        k++;
	   
		
	}
}

void keypad(char *input,char key[][10],char *out,int i,int j)
{
	if(input[i]=='\0')
	{
	   out[j]='\0';
	   cout<<out<<" ";
		return ;
	}
    int k=0;
	while(key[int(input[i])-48][k]!='\0')
	{
		out[j]=key[int(input[i]-48)][k];
		keypad(input,key,out,i+1,j+1);
		k++;
	}
}
int main()
{
	char key[10][10]={ " ", "abc", "def", "ghi", "jkl", "mno" , "pqrs", "tuv" , "wx", "yz" };
	char input[10];
	cin>>input;
	char out[20];

    num(input,key,0);
    cout<<cnt<<endl;

	keypad(input,key,out,0,0);

	return 0;


}
