#include <iostream>
using namespace std;
void sort012(int a[], int n)
{
    
    for(int i=0;  i<n ; i++){
        for (int j = 0; j < n; j++)
        {
            if(a[j]> a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
       
}


int main(int argc, char const *argv[])
{
    int arr[] = {1,5,6,0};
   
cout<<"hello"<<endl;
sort012(arr,4);
    for (int i = 0; i <4; i++)
    {
        cout<< arr[i] << endl;
    }

    return 0;
}
