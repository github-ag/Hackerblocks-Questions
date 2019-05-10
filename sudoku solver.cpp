#include<iostream>
using namespace std;
bool boxcheck(int a[9][9],int i,int j,int val)
{
	int row_box = i/3;
	int col_box = j/3;
	int p = 3*row_box;
	int q = 3*col_box;
	for(int l = 0;l<3;l++)
	{
		for(int m=0;m<3;m++)
		{
			if(a[p+l][q+m]==val)
				return true;

		}

	}
	return false;
}
bool rowcheck(int a[9][9],int row,int val)
{
    for(int i=0;i<9;i++)
    {
        if(a[row][i]==val)
            return true;


    }
    return false;
}
bool colcheck(int a[9][9],int col,int val)
{
    for(int i=0;i<9;i++)
    {
        if(a[i][col]==val)
            return true;

    }
    return false;

}
bool canplace(int a[9][9],int row,int col,int val)
{
    if(a[row][col]!=0)
        return false;
    if(boxcheck(a,row,col,val))
        return false;
    if(rowcheck(a,row,val))
        return false;
    if(colcheck(a,col,val))
        return false;
    return true;
}

void fillsudoku(int a[9][9],int row=0,int col=0)
{
    if(row==9)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
        return ;
    }
    for(int k=1;k<=9;k++)
    {
        if(a[row][col]==0){
        if(canplace(a,row,col,k))
        {
            a[row][col]=k;
            if(col==8)
                fillsudoku(a,row+1);
            else
                fillsudoku(a,row,col+1);
            a[row][col]=0;
        }
        }
        else{
             if(col==8)
                fillsudoku(a,row+1);
            else
                fillsudoku(a,row,col+1);
        }

    }

}
int main()
{
	int a[9][9]={0};
	int n;
	cout<<"How many values do you want to enter?  ->";
	cin>>n;
	int row,col,val;
	for(int i=0;i<n;i++)
    {
        cin>>row>>col>>val;
        a[row][col]=val;
    }
    fillsudoku(a,0,0);


	return 0;


}
