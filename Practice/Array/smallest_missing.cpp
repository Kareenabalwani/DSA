#include<iostream>
using namespace std;

int minimum(int a[],int n){
   
    int min = 0;
    for(int i=0;i<n; i++){
        if(a[i]<0){
            continue;
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}

int smallest_missing(int a[],int n){

}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[5]={-1,4,2,5,3};
    int min = minimum(arr,5);
    cout<<min;
    return 0;
}
