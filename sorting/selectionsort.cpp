#include<iostream>
using namespace std;
void arrayInput(int arr[],int n){
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
}
 void printArray(int arr[], int n){
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void selectionsort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int min= i;
        for(int j=i+1 ; j<n ; j++){
            if (arr[j]<arr[min]){
                min = j;
            }

        }
        int temp = arr[i];
        arr[i]  = arr[min];
        arr[min] =temp;
    }
}
int main(int argc, char const *argv[])
{
   int n;
   cout<<"Entet number of elements : ";
   cin>>n;
   int arr[n];
   arrayInput(arr,n);
   selectionsort(arr,n);
   printArray(arr,n);
    return 0;
}
