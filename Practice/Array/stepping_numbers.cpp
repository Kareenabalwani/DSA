#include <iostream>
#include <vector>
using namespace std;

void stepping(int n, int m)
{
    int count = 0;
    for (int i = n; i <= m; i++)
    {
        int flag = 0;
        vector<int> vec;
        int a = i;
        // if a number is single digit
        if (a < 10)
        {
            cout << a << " ";
            count = count + 1;
            continue;
        }
        if(a%10 == 0 && a>=100){
            continue;
        }  
        // get a reverse of a num
        int rem = 0;
        int rev = 0;
        while (a != 0)
        {
            rem = a % 10;
            rev = (rev * 10) + rem;
            a = a / 10;
        }

        // reverse of reverse - to get digit by digit from beginning
        int digit = 0;
   
        if (rev < 10 && rev != 1)
        {
            continue;
        }
        else
        {
            while (rev != 0)
            {
                digit = rev % 10;
                rev = rev / 10;

                // store in a vector for easy access of digits in a number
                vec.push_back(digit); // 12
            }
            cout << "\n printing vec" << endl;
            for (auto it : vec)
            {

                cout << it << "  ";
            }
            cout << "==========size of vec ==========" << vec.size();

            for (int i = 0; i < vec.size() - 1; i++)
            {
                cout << "\nvec of i:" << vec[i];

                int num1 = vec[i];
                int num2 = vec[i + 1];
                cout << "num1:" << num1;
                cout << " num2:" << num2;
                int sub = num1 - num2;
                int minusone = -1;
                cout << "\nsubtraction" << sub;
                if (sub == 1 || sub == minusone)
                {
                    // cout << "entered!";
                    flag += 0;
                }
                else
                {
                    // cout << "flag else conditionn entered!!!!!!";
                    flag =flag + 1;
                    continue;
                }
            }
        }
        cout << "\n";

        if (flag == 0)
        {
            cout << "==================================Count added for=========================== ";
            // cout << i << " ";
            count = count + 1;
        }
        vec.clear();
    }
    cout << "\n"<< count;
}
int main(int argc, char const *argv[])
{
    stepping(10, 15);
    return 0;
}
