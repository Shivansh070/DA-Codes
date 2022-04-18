#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
 int n,i,num,T;
 cout<<"enter the test cases:";
 cin>>T;
 for(int m=0;m<T;m++)
 {
 int flag=0;
 cout<<"\nenter the size of array:";
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  cout<<"enter the number:";
  cin>>num;
 sort(a,a+n);
 int j=0,k=n-1;
 while(j<=n/2 && k>=n/2)
  {
   if(a[j]+a[k]>num)
    k--;
   else
    j++;
   if(a[j]+a[k]==num)
   {
    cout<<a[j]<<" "<<a[k]<<",";
    flag++;
   }
  }
  if(flag==0)
    cout<<"No Such Pair Exist";
 }
  return 0;
}
