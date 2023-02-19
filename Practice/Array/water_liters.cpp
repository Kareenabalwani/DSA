#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int T,N;
    int one=1,two=2;
   cout<<"Enter testcases:";
   cin>>T;
   while(T--){
    cout<<"Enter N:(number of liters u want in bucket)";
    cin>>N;
    int exp1 = 1+1;
    int exp2 = 1+2;
    int exp3 = 2;
    int exp4 = 2+1;
    int count =0;
    if( exp1 != N){
        int rem = N - exp1;
        // test if remainder is even
        if (rem % 2 == 0){
            count+=2;
        }
        else{
            count++;
        }
    }
    if(exp2 != N){
        int rem = N - exp2;
        if (rem % 2 == 0){
            count +=2;
        }
        else{
            count++;
        }
    }
    if(exp3 != N){
        int rem = N - exp2;
        if (rem % 2 == 0){
            count +=2;
        }
        else{
            count++;
        }
    }

    if(exp4 != N){
        int rem = N - exp2;
        if (rem % 2 == 0){
            count +=2;
        }
        else{
            count++;
        }
    }

    cout<<"count is :"<<count;



   }
    return 0;
}
