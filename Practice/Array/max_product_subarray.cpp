//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    vector<int> outer;
	    
	  for(int i=0; i<n; i++){
	      vector<int> inner;
	      int pro=arr[i];
	      for(int j=i+1;j<n; j++){
	         pro= pro*arr[j];
             //-18 
	         
	         if(!inner.empty()){
                int last = inner.back();
	             if(pro>last){
                    
	                 inner.push_back(pro);
                     cout<<"added :"<<pro;
	             }else{
                    break;
                 }
	         }else{
                inner.push_back(pro);
                 cout<<"added :"<<pro;
             }

	      }
	      outer.push_back(inner.back());
          cout<<"Outer added :"<<inner.back();
	  }
      
      return *max_element(outer.begin(),outer.end());
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends