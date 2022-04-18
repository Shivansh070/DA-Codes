// WEEK - 01 QUESTION NO. 03
/* Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether a given key element is present in the sorted array or not. For an array 
arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k
] and so on. Once the interval (arr[2k
] 
< key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k
to find the element 
key. (Complexity < O(n), where n is the number of elements need to be scanned for searching): 
Jump Search
Input format:
The first line contains number of test cases, T.
For each test case, there will be three input lines.
First line contains n (the size of array).
Second line contains n space-separated integers describing array.
Third line contains the key element that need to be searched in the array.
Output format:
The output will have T number of lines. 
For each test case, output will be “Present” if the key element is found in the array, otherwise 
“Not Present”. 
Also, for each test case output the number of comparisons required to search the key. */

#include<iostream>
using namespace std;
#define max 100
void linearSearch(int arr[], int low, int high,int c,int key);

void JumpingSearch(int arr[], int n,int key)
{
    int l=1,i=0;
    while(i<n)
    {
        if(arr[i]==key)
        {
            cout<<"Present "<<l<<endl;
            break;
        }
        else if(arr[i]>key)
        {
            linearSearch(arr,(i*0.2),i,l,key);
        }
        if(i==0)
        i = i +2;
        else
        i = i*2;
        if(i>=n)
        {
            i = i*0.2;


            linearSearch(arr,i,n,l,key);
            break;
        }
        l++;
    }
}

void linearSearch(int arr[], int low, int high,int c,int key)
{
    int l=0,k=0;
    for(int i=low;i<=high;i++)
    {
        l++;
        if(arr[i]==key)
        {
            k++;
            cout<<"Present "<<l+c<<endl;
            break;
        }
    }
        if(k==0)
        cout<<"Not present "<<l+c<<endl;
}

int main()
{
    int arr[max],t,n,key;
    cin>>t;
    while(t)
    {
        t--;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        JumpingSearch(arr,n,key);
    }
}
