#include<iostream>
using namespace std;
void arrayInput(int arr[],int n){
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
}

void insertionSort(int arr[],int n){
    for(int i =1 ; i<= n-1; i++){
        int temp = arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
 void printArray(int arr[], int n){
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int n;
    
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    
    for(int i=0; i<n; i++){
    cin>>arr[i];
 }
    arrayInput(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}

