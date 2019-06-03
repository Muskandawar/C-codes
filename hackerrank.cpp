#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i;
    int j=0;
    cin>>t;
    string s[t];
    for(i=0;i<t;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<t;i++)
    {   j=0;
        while(s[i][j]!='\0')
        {   if(j%2==0)
        {
            cout << s[i][j];
        }
            j=j+2;
            }
            cout<<" ";
            j=1;
        while(s[i][j]!='\0')
        {
            if(j%2!=0)
            {
                cout<<s[i][j];
            }
            j=j+2;
        }
        cout<<endl;
    }
    return 0;
}
