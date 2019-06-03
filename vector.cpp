#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int n,i,j,x,y,q;
   cin>>q;
   cin>>n;
   vector<int>size;
   vector<int>a[n];
   for(i=0;i<n;i++)
   {  cin>>x;
       size.push_back(x);
       for(j=0;j<size[i];j++)
       { cin>>y;
       a[i].push_back(y);
       }
   }
   for(i=0;i<q;i++)
   { 
      cin>>x>>y;
      cout<<a[x][y]<<endl;
   }
    return 0;
}

