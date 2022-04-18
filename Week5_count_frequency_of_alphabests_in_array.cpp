#include<iostream>
using namespace std;
void count_sort(char a[],int n,int k)
{
 int count[k+1]={0},i,flag=0;
 for(i=0;i<n;i++)
  {
   ++count[a[i]-'a'];
  }
 for(char ch=97;ch<=122;ch++)
 {
  if(count[ch-97]>1)
  {
   flag++;
  }
 }
 int maximum=count[0],key;
 for(i=1;i<k;i++)
 {
     if(count[i]>maximum)
     {
         maximum=count[i];
         key=i;
     }
 }
 if(flag==0)
    cout<<"No Duplicates Present";
 else
    cout<<(char)(key+97)<<"="<<maximum;
}
int main()
 {
  int n,i,T;
  cout<<"enter the test cases:";
  cin>>T;
  for(int j=0;j<T;j++)
  {
  cout<<"\nenter the size of array:";
  cin>>n;
  char a[n];
  cout<<"enter the array:";
  for(i=0;i<n;i++)
   cin>>a[i];
  int k=25;
  count_sort(a,n,k);
  }
  return 0;
 }
