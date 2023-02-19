#include<iostream>
#include<array>
#include<vector>
using namespace std;
void inputArray(int arr[],int n){
    for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
}

void printArray(int arr[],int n){
    cout<<"\n Elements in the array are:";
        for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
 
}
int main(int argc, char const *argv[])
{
    int n,s;
    cout<<"Enter n:";
    cin>>n;
   int arr[n];
inputArray(arr,n);
printArray(arr,n);

int pi=0,ni=0;
vector<int> positive_array;
vector<int> negative_array;

for(int i=0; i<n; i++){
    if(arr[i]>0){
        // positive_array[pi]=arr[i];
        positive_array.push_back(arr[i]);
        // pi++;
    }else{
        // negative_array[ni] =arr[i];
        // ni++;
        negative_array.push_back(arr[i]);
    }
}



for(auto it: negative_array){
   positive_array.push_back(it);
}
cout<<"Final array:";
for(auto it: positive_array){
    cout<<it<<" ";
}
return 0;
}
