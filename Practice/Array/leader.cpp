//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> vec;
        int flag=0;
        for(int i=0;i<n;i++){
            int element = a[i];
            
            for(int j=i+1; j<n; j++){
                if(element >= a[j])
                {
                    flag=0;
                }else{
                    flag++;
                    break;
                }
                
            }
            
            if(flag==0 || i==n-1) {
                vec.push_back(element);
                
                
            }
        }
      
        return vec;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
          cout<<"printing"<<endl;
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it <<endl;
        }
        cout<<"printing";
       
       
        
        cout << endl;

   }
}

// } Driver Code Ends