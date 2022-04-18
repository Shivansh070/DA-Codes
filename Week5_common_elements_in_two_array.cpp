#include<iostream>
using namespace std;
int main()
 {
  int m,n,i,j;
  cout<<"enter the size of 1st array:";
  cin>>m;
  int a[m];
  for(i=0;i<m;i++)
   {
    cin>>a[i];
   }
  cout<<"enter the size of 2nd array:";
  cin>>n;
  int b[n];
  for(i=0;i<n;i++)
   {
    cin>>b[i];
   }
  for(i=0;i<m;i++)
   {
    int flag=-1;
    for(j=0;j<n;j++)
     {
      if(a[i]==b[j])
      {
        if(b[j]==flag)
           continue;
        else
        {
         cout<<" "<<a[i];
         flag=a[i];
        }
      }
     }
   }
   return 0;
 }
