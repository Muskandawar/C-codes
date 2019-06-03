#include<iostream>
using namespace std;
void marks(int m[3][5])
{    int i,j,sum=0,total=0,n,avg=0;
     for(i=0;i<3;i++)
     { sum=0;
	 for(j=0;j<5;j++)
     { sum=sum+m[i][j];
	 }
	 avg=sum/5;
	 cout<<"avg for each student "<<i+1<<"is "<<avg<<endl;
	 if(avg<=30)
	 { n++;
	 }
	 }
	 cout<<" no. of students are: "<<n<<endl;
	 for(j=0;j<5;j++)
	 { total=0;
	 for(i=0;i<3;i++)
	 { total=total+m[i][j];
	 }
	 cout<<"avg marks for each subject is "<<total/3<<endl;
}
}
int main()
{    int mat[3][5]={10,20,30,40,50,60,10,20,30,40,70,10,20,30,40};
     marks(mat);
}
