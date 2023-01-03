// Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

// Only numbers 1 through 9 are used.
// Each number is used at most once.
// Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

// Input: k = 3, n = 9
// Output: [[1,2,6],[1,3,5],[2,3,4]]
// Explanation:
// 1 + 2 + 6 = 9
// 1 + 3 + 5 = 9
// 2 + 3 + 4 = 9
// There are no other valid combinations.


#include<bits/stdc++.h>
using namespace std;


void solve(int st,int k,int n,vector<int> &ds,vector<vector<int>> &ans){

  if(k<=0){
    if(n==0){
      ans.push_back(ds);
      return;
    }
  }

  for(int i=st;i<=9;i++){
    ds.push_back(i);
    solve(i+1,k-1,n-i,ds,ans);
    ds.pop_back();
  }
}
    

   void combinationSum3(int k, int n) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        solve(1,k,n,ds,ans);
        
        for (int i = 0; i < ans.size(); ++i)
        {
          for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
          }
          cout<<endl;
        }
    }
    
int main() {

  

  //ye maat likhnaa  endif tk
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  

    int k=3,n=9;

    combinationSum3(k,n);

return 0;
}