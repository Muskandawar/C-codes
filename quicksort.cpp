#include<iostream>
using namespace std;
	int partition(int *a,int p,int r)
	{ int pivot=a[r];
	int i=p-1;
	int j;
	for(j=p;j<r;j++)
	{ if(pivot>=a[j])
	{ i++;
	swap(a[i],a[j]);
	}
	}
	swap(a[i+1],a[r]);
	return(i+1);
	}
	void quicksort(int *a,int p,int r)
	{ if(p<r)
	{ int q=partition(a,p,r);
	quicksort(a,p,q-1);
	quicksort(a,q+1,r);
	}
	}
	void display(int *a,int n)
	{ for(int i=0;i<n;i++)
	{ cout<<a[i]<<" ";
	}
	}
	int main()
	{ int y;
	cout<<"enter no. of elements: ";
	cin>>y;
	int a[y];
	for(int i=0;i<y;i++)
	{ cout<<"enter data: ";
	cin>>a[i];
	}
	quicksort(a,0,y-1);
	display(a,y);
	}
