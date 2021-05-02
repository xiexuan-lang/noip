#include<iostream>
using namespace std;
int main()
{
    int a[4][4],leftall=0,rightall=0;
    for(int i=0;i<4;i++)
    {
    for (int j = 0; j < 4; j++)
    {
        cin>>a[i][j];
    }
    }
    for (int i = 0; i < 4;i++)
    {
       leftall=leftall+a[i][i];
        rightall=rightall+a[i][3-i];
    }
    cout<<leftall<<" "<<rightall;
    
    return 0;
    /*  1 2 3 4 
        5 6 7 8
        9 0 1 2
        2 3 4 5 */
    
}