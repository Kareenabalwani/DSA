#include<iostream>
#include<algorithm>
using namespace std;

void k_revserse (int arr[],int size,int k){
    int i=0;
    int j=k;
    while(i<j && i<size){
       
       if(j>size){
        j=size;
       }
        reverse(arr+i,arr+j);
        j=j+k;
        i=i+k;
    }
    //display
    cout<<"printing\n";
    for(int i=0;i<size; i++){

        cout<<arr[i]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int arr[5] ={1,2,3,4,5};
    int size = sizeof(arr) /sizeof(arr[0]);
    cout<<"size is :"<<size<<endl;
    // cout<<arr[0]<<endl;
    // reverse(arr,arr+3);
    // cout<<arr[0];
    k_revserse(arr,size,3);

    return 0;
}
