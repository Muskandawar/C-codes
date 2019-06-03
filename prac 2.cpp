#include<iostream>
using namespace std;
int main()
{ int arr[50],i,j,del,size,count=0;
cout<<"enter arrays size:";
cin>>size;
cout<<"enter array elements";
for(i=0;i<size;i++)
{ cin>>arr[i];
}
cout<<"enter element you want to delete";
cin>>del;
for(i=0;i<size;i++)
{ if(arr[i]==del)
{ for(j=i;j<(size-1);j++)
{ arr[j]=arr[j+1];
}
count++;
break;
}
}
if(count==0)
{ cout<<"element not found";
}
else
{ cout<<"element deleted successfully";
for(i=0;i<size-1;i++)
{ cout<<arr[i]<<" ";
}
}
}
