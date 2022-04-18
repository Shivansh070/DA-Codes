#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
    int n,key,a[100],temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    int first = 0;
    int last = n-1;
    int mid = (first+last)/2;
    int com=1;
    while(first <= last)
    {
        com++;
        if(a[mid]<key)
            first = mid+1;
        else if(a[mid]==key)
        {
            cout<<"present "<<com;
            break;
        }
        else
            last = mid-1;
        mid = (first+last)/2;
    }
    if(first>last)
        cout<<"not present "<<com;
    cout<<endl;
    }
    return 0;
}
