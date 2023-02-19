//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
       int equilibriumPoint(long long a[], int n) {
    
       int k=0;
       int ans;

    
        for(int i=0; i<n; i++){
             int bsum=0,asum=0;
            
            //before part 
            
            for(int j=0; j<i; j++){
                bsum = bsum +a[j];
            }
            //after part
            for(int m=i+1 ; m<n; m++){
                asum = asum + a[m];
            }
           

            if(bsum == asum){
                ans=i+1;
               break;
                
            }else{
                ans=-1;
            }
         
        }
         return ans;  
    }
    
};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cout<<"enter testcases:";
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cout<<"enter n:";
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << "ans is :"<<ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends