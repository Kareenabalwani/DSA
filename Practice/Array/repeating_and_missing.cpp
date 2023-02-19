//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int repeating,missing; 
        static int myarr[2];
        int min = arr[0];
        int max = arr[n-1];
        if(min == max){
            int ex_min = min-1;
            if(ex_min>0){
            missing = ex_min;
            myarr[1] = missing;
            }else{
                int ex_max=max+1;
                missing = ++max;
                myarr[1] = missing;
            }
            
        }
        for(int i=min;i<=max; i++){
            
            bool exist = find(arr,arr+n,i) != arr+n;
            if(exist == false){
                missing = i;
                myarr[1]= missing;
                break;
            }else{
                missing = -1;
            }
         }
         for(int i=0; i<n; i++){
            if(arr[i]== arr[i+1])    
            {
                repeating = arr[i];
                myarr[0]= repeating;
                break;
            }
                
             
         }
         
         if(missing== -1){
            
            int min_i = min-1;
            int max_i = max+1;
        for(int i=min_i;i<=max; i++){
            if(i>0){
            bool exist = find(arr,arr+n,i) != arr+n;
            if(exist == false){
                missing = i;
                myarr[1]= missing;
                break;
            }else{
                missing = max_i;
                myarr[1]= missing;
            }
            }
         }
  }
       
     
     return myarr;    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends