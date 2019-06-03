#include<iostream>
using namespace std;
int main()
{
    int i,j,max=0,min=0,sum=0;
    int a[6][6]={1,1,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0,0,0,2,4,4,0,0,0,0,2,0,0,0,0,1,2,4,0};
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
        min=sum;
        if(min>max)
        {
            max=sum;
        }
        if(min<0)
        {
            min=0;
        }
        sum=0;
    }
    }
    cout<<"max is: "<<max;
}
