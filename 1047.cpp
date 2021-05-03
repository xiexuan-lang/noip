#include<iostream>
#include<cstdio>
using namespace std;
bool yes=0;
struct things
{
    int num;
    int where;
};
struct itrue
{
    int x;
    int y;
    int num;
}date1={1,1,0};

int main()
{
    int a[6][6];
for (int i = 1; i < 6; i++)
{  
    for (int j = 1; j < 6; j++)
    {  
        cin>>a[i][j];
    }
    
}
/*                          */
things height[6],wides[6];
for (int i = 0; i < 6; i++)
{
   height[i].num=0;
   height[i].where=1;
   wides[i].num=a[1][i];
   wides[i].where=1;
}//start

for (int i = 1; i < 6; i++)
{   
    for (int j = 1; j < 6; j++)
    {
      if (a[i][j]>height[i].num)
      {
          height[i].num=a[i][j]; height[i].where=j;
      }
      if (a[j][i] <wides[i].num)
      {
           wides[i].num=a[j][i];  wides[i].where=j;
      }
    }
    
}//找出各组别的最大和最小
/*for (int i = 1; i < 6; i++)
{cout<<endl;
    printf("height[%d] is %d , wides[%d] is %d " ,i,height[i].num,i,wides[i].num);
    printf("height.w[%d] is %d , wides.w[%d] is %d" ,i,height[i].where,i,wides[i].where);
}
*/



for (int i = 1; i < 6; i++)
{
    for (int j = 1; j < 6; j++)
    {
        if(height[i].num==wides[j].num){ 
        date1.x=height[i].where;date1.y=wides[j].where;
        date1.num=wides[j].num;yes=1;
        }
    }
}
if (yes==true)
{
 cout<<date1.y<<" "<<date1.x<<" "<<date1.num;
}else
{
    cout<<"not found";
}
return 0;

}


/*
   横为H，纵为W
 11 3 5 6 9        
 12 4 7 8 10       
 10 5 6 9 11       
 8  6 4 7 2        
 15 10 11 20 25    
*/