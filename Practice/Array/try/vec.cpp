#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(2);
    cout<<"front: "<<vec.front();
    vec.insert(vec.begin(),75);
    cout<<"\nfront again: "<<vec.front();
    vec.erase(vec.begin());
    cout<<"\nfront removed now front is: "<<vec.front();
     vec.insert(vec.begin(),75);
      cout<<"\n before removing: element at index 1: "<<vec.at(1);
     vec.erase(vec.begin()+1);
     cout<<"\n after removing :element at index 1: "<<vec.at(1);
    cout<<"\nvec end :"<<vec.back(); 
    cout<<"maximum:"<<*max_element(vec.begin(),vec.end());  



    return 0;
}
