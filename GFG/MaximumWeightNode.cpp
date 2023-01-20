//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int maxWeightCell(int n, vector<int> edge)
    {
        // code here
        unordered_map<int, int> u;
        for(int i=0; i<n; i++){
            if(edge[i] != -1){
                u[edge[i]] += i;
            }
        }
        
        int ans = -1;
        for(auto it : u){
            if(ans == -1){
                ans = it.first;
            }
            else if(it.second > u[ans]){
                ans = it.first;
            }
            else if(it.second == u[ans]){
                ans = max(ans, it.first);
            }
        }
        if(ans != -1){
            return ans;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends
