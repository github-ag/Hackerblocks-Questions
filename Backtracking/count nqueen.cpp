#include <iostream>

using namespace std;
bool can_place(int board[][11],int n,int i,int j)
{
   int x=i,y=j;
   while(x>=0)
   {
       if(board[x][y]==1)
        return false;
       x--;
   }
   x=i;
   while(x>=0&&y>=0)
   {
       if(board[x-1][y-1]==1)
        return false;
       x--;
       y--;
   }
   x=i;
   y=j;
   while(x>=0&&y<n)
   {
       if(board[x-1][y+1]==1)
        return false;
       x--;
       y++;
   }
   return true;

}

int  Nqueen(int board[][11],int n,int i)
{
    if(i==n)
    {
        /*for(int p=0;p<n;p++)
        {
            cout<<"\n";
            for(int q=0;q<n;q++)
                cout<<board[p][q];
        }
        cout<<"\n";
        //return true;
        */
      
      return 1;

    }
    int cnt=0;


    for(int j=0;j<n;j++)
    {

        if(can_place(board,n,i,j))
         {
           board[i][j]=1;

           int aageKacnt = Nqueen(board,n,i+1);
           cnt+=aageKacnt;
           //backtracking
           board[i][j]=0;
         }
         
         //return false;
         
    }
    return cnt;
}

int main()
{
    int board[11][11]={0},n;
    cin>>n;
   cout<< Nqueen(board,n,0);
    
    return 0;
}
