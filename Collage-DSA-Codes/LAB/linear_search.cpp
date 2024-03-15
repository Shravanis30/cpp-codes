#include<iostream>
using namespace std;
int main()
{
    int i,n,item;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements in the array\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Given array is:\n";
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<"\n";
    cout<<"Enter the element that u want to search in the array\n";
    cin>>item;
    arr[n]=item;
    i=0;
    while(arr[i]!=item)
    i=i+1;
    if(i==n)
    cout<<"Element not found in the array\n";
    else
    cout<<"Element found at position "<<i+1<<"\n";
    return 0;
}