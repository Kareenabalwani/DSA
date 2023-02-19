#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,s;
    cout<<"Enter n:";
    cin>>n;
   int arr[n];

    for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"\n Elements in the array are:";
    for(auto it:arr){
    cout<<it<<" ";
}
cout<<"\n Enter S (the sum you want):";
cin>>s;
int start_pos,end_pos;
for(int i=0; i<n; i++){
    start_pos=i+1;
    int sum=0;
    for(int j=i; j<n; j++){
       sum = sum + arr[j];
       if(sum == s){
        end_pos=j+1;
        break ;
       }
       else if(sum > s){
         break;
       }
             
    }
     if(sum == s){
        break;
       } 
    else if(sum !=s){
          start_pos=-1;
          end_pos= -1;
       }
}

cout<<"\n start position :"<<start_pos;
cout<<"\n end position :"<<end_pos;
return 0;
}
