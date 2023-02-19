#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> duplicates(int arr[], int N)
{
    vector<int> vec;
    for (int i = 0; i < N; i++)
    {
        int val = arr[i];
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[j] == val)
            {
                count = count + 1;
            }
        }

        if (count > 1)
        {
            if (find(vec.begin(), vec.end(), val) == vec.end())
            {
               
                vec.push_back(val);
            }
        }
    }
    if(vec.empty()){
        vec.push_back(-1);
        // return vec;
        
    }
    sort(vec.begin(),vec.end());
    return vec;
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[6] = {0,-2,2,3,-1,1};

    vector<int> v = duplicates(arr, 6);
//  cout<<v[0]<<" ";   
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
