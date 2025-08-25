#include <bits/stdc++.h>
using namespace std;
int dp[10005][10005];
bool subset_sum(int n, int s, int a[]) 
{
 if(n==0){ 
    if(s==0) return true;
    else return false;
    
}
if (dp[n][s]!=-1) return dp[n][s];
if(a[n-1]<=s){
    return dp[n][s]=subset_sum(n-1,s-a[n-1],a) || subset_sum(n-1,s,a);
}
else{
    return dp[n][s]=subset_sum(n-1,s,a);
}}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin >> n ;
   int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> x;
    dp[0][0]=true;
    for(int i=0;i<=n;i++){
        
            dp[0][i]=0;
        
    }
    for(int i=0;i<=n;i++){
        
         for(int j=0;j<=x;j++){
            if(a[i-1]<=j) dp[i][j]=dp[i-1][j-a[i-1]] + dp[i-1][j];
            else dp[i][j]=dp[i-1][j];
        
    }}
    int sum= 0;
   for(int i=0;i<=n;i++){
        
         for(int j=0;j<=x;j++){
            sum+=dp[i][j];
            if(sum%2==1) cout << "YES\n";
            else cout << "NO\n";
        
    }
     
    
}
return 0;
    }