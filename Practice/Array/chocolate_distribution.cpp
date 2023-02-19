#include <iostream>
#include<algorithm>
using namespace std;
int chocolates(int arr[], int n, int m)
{
    //if num of chocolates are less than students
    // say arr size n=10 but students m=12
    if(n<m){
        return -1 ;
    }
    //if students are 0 or num of chocolates in arr are 0
    if(m == 0 | n == 0){
        return 0;
    }
    sort(arr,arr+n);
    int min_diff = INT8_MAX;
    //  for (int i = 0;  i<n; i++) is also fine
    for (int i = 0;  i+m-1<n; i++)
    {
            int pos = i + m - 1;
        if (pos < n)
        {
            int diff = arr[pos] - arr[i];
            if (diff < min_diff)
            {
                min_diff = diff;
            }
        }else{
            break;
        }
    }
    return min_diff;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "enter n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "enter num of students:";
    cin >> m;

    int ans = chocolates(arr, n, m);
    cout<<"ans is:"<<ans;

    return 0;
}
