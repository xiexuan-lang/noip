#include<iostream>
using namespace std;
int main()
{
int num;
cin>>num;
int a[num][num];
int high[num];int wide[num]; 
   int flagw=0,flagh=0;
for (int i = 0; i < num; i++)
{
    high[i]=0;
    wide[i]=0;
}


for (int i = 0; i < num; i++)
{
    for (int j = 0; j < num; j++)
    {
        cin>>a[i][j];
        if (a[i][j]==1)
        {
            wide[i]++;high[j]++;
        }
        
    }
    
}
for (int i = 0; i < num; i++)
{
   if ((wide[i]%2==0))
   {flagw++;
   if (high[i]%2==0)
   {
      flagh++;
   }
   
}

if( (flagw==num)&&(flagh==num))
{
    cout<<"0K";
}



    
    return 0;
}

}