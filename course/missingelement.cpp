//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
       int d1,d2,d3,d4;
        d1=arr[1]-arr[0];
        d2=arr[2]-arr[1];
        d3=arr[n-1]-arr[n-2];
        d4=arr[n-2]-arr[n-3];
        
        if(d1==d2&&n>2){
            for(int i=0;i<n;i++){
                if(arr[i+1]-arr[i]==d1){
                    continue;
                }
                else{
                    
                    return (arr[i]+d1);
                }
                
            }
        }
        
        
        else if(d1!=d2 && n>2){
            
            
             for(int i=0;i<n;i++){
                if(arr[i+1]-arr[i]==d3){
                    continue;
                }
                else{
                    
                    return (arr[i]+d3);
                }
                
            
        }
    }
    
         else if(n==2){
             return (arr[0]+arr[1])/2;
         }
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends