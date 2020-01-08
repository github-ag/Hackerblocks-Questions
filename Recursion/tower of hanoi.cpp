#include<iostream>
using namespace std;
void towerOfHanoi(int n,char src,char dest,char helper)
{
    //Base Case
    if(n==0)
    return;
    // Recursive case
    //Move n-1 discs to the helper function
    towerOfHanoi(n-1,src,helper,dest);
    //Move the nth disc to the destination
    cout<<"Move "<<n<<" disc to the "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}
int main()
{
    int n=3;
    towerOfHanoi(n,'A','C','B');
    return 0;
}
