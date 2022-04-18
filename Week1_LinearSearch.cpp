#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
    int n,key,a[100];
    int com;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    for(int i=0;i<n;i++)
    {
        com=com+1;
        if(a[i]==key)
        {
            cout<<"present ";
            cout<<com<<endl;
            break;
        }
        if(com==n)
        {
            cout<<"not present "<<com<<endl;
        }
    }
    }
    return 0;
}
