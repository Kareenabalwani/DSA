#include<iostream>
using namespace std;
int main(){
    int counter=0;
    int arr[5];
    while(counter<5){
        int x;
        cout<<"\n enter count "<<counter<<": ";
        cin>>x;
        if(cin.fail()){
            continue;
        }
        if(!cin.fail()){
            arr[counter]=x;
            cout<<"\n added: ";
            counter++;
        }
        // else{
        //     cout<<"\n failed";
        //     continue;
        // }

    }
}

