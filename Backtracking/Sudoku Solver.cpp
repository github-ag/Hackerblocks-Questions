#include<iostream>
#include<cmath>
using namespace std;
bool canPlace(int matrix[100][100],int number,int n,int i,int j)
{
    //checking along the rows and columns
    for(int a=0;a<n;a++)
    {
        if(matrix[a][j]==number || matrix[i][a]==number )
        return false;

    }
    //checking in the box
    int rn = sqrt(n);
    int sx = (i/rn)*rn;
    int sy = (j/rn)*rn;
    for(int a=sx;a<sx+rn;a++)
    {
        for(int b=sy;b<sy+rn;b++)
        {
            if(matrix[a][b]==number)
            return false;
        }
    }
    //if everything is all right 
    return true;
}
bool solve_sudoku(int matrix[100][100],int n,int i=0,int j=0)
{
    //Base case
    if(i==n)
    {
        for(int a=0;a<n;a++)
        {
            for(int b=0;b<n;b++)
            cout<<matrix[a][b]<<" ";
            cout<<endl;
        }
        return true;
    }

    bool ans = false; 
    //If sudoku is not solved 

    //check if the block is already filled
    if(matrix[i][j]!=0)
    {
        if(j<n-1)
        ans = solve_sudoku(matrix,n,i,j+1);
        else
        ans = solve_sudoku(matrix,n,i+1,0);
    }

    
    //check what number we can place in the given cell if the cell is not filled.
    else
    {
         for(int number=1;number<=n;number++)
        {
            if(canPlace(matrix,number,n,i,j))
            {
                matrix[i][j]=number;
                if(j<n-1)
                ans = solve_sudoku(matrix,n,i,j+1);
                else
                ans = solve_sudoku(matrix,n,i+1,0);
                if(ans == true)
                return ans ;

            }
            matrix[i][j]=0;
        }
    
    }
    return ans;
    
   

}
int main()
{
    int n;
    cin>>n;
    int matrix[100][100]={0};
    int ele;
    //fill the given sudoku
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ele;
            matrix[i][j] = ele;
        }
    }
    bool ans;
    ans = solve_sudoku(matrix,n);
    cout<<endl;
    if(ans)
    {
        cout<<"Sudoku is solved ";

    }
    else
    {
        cout<<"Sudoku cannot be solved";
    }
    return 0;
}
