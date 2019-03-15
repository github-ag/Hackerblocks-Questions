#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
void keypad(char *input,char key[][10],char *out,int i,int j,string searchIn[])
{
	if(input[i]=='\0')
	{
	   out[j]='\0';
	   int check=0;
	   for(int l=0;l<11;l++)
	   {
	   	string name=searchIn[l];
	   	int index=0;
	   	int out_index=0;
	   	check=0;
	   	while(name[index]!='\0')
	   	{
           if(out[out_index]==name[index])
           {
           	check++;
           	out_index++;

           if(check==strlen(out))
           {
           	cout<<name<<endl;
           	break;
           }
           }
           else
           {
           	check=0;
           	out_index=0;
           }
           index++;
           

        }
	   }	
		
		return ;

	}
	int k=0;
	while(key[int(input[i])-48][k]!='\0')
	{
		out[j]=key[int(input[i]-48)][k];
		keypad(input,key,out,i+1,j+1,searchIn);
		k++;
	}
}
int main()
{
	char key[10][10]={ " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
	string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
	char input[10];
	cin>>input;
	char out[20];
	keypad(input,key,out,0,0,searchIn);
	return 0;


}
