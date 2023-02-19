#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,k;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"\n Elements in the array are:";
    for(auto it:arr){
    cout<<it<<" ";
}
cout<<"\n Enter element you want to find frequency of:";
cin>>k;

int count=0;
for(int i=0;i<n;i++){
    if (arr[i] == k){
        count++;
    }
}
cout<<"\n count is :"<<count;
    return 0;
}
