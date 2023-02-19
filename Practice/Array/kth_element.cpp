#include<iostream>
using namespace std;
void sorting(int arr[], int n){

    for (int i=0 ; i<n-1;i++ ){
        int min= i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[min]){
                min =j;
            }
        }
       int temp= arr[i] ;
       arr[i] = arr[min];
       arr[min] = temp;

    }
}

int main(int argc, char const *argv[])
{
int n,k;
cout<<"Enter the n:";
cin>>n;
int arr[n];
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}

for(auto it:arr){
    cout<<it<<" ";
}
 sorting(arr,n);
 cout<<"after sorting :\n";

 for(auto it:arr){
    cout<<it<<" ";
}

cout<<"Enter k:";
cin>>k;
cout<<"\n "<<k<<"th smallest Element is: ";
int smallIndex=k-1;
cout<<arr[smallIndex];
cout<<"\n "<<k<<"th Highest Element is: ";
int highIndex=n-k;
cout<<arr[highIndex];

return 0;
}