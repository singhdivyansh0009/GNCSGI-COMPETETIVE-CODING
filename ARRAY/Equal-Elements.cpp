/*Problem Statement : https://www.codechef.com/practice/course/arrays-strings-sorting/INTARR01/problems/EQUALELE */

#include <iostream>
#include <algorithm>
using namespace std;
/*  
  Approach 1 :
  Time Complexity:O(n)
  Space Complexity:O(n)
*/
/*
int minOperation(int*a,int n){
       unordered_map<int,int>m;
       int Max=0;
	   for(int i=0; i<n; i++)
	        m[a[i]]++;
	    for(auto i:m)
	       Max=max(i.second,Max);
   return n-Max;
}
*/
/* 
  Approach 2 :
  Time Complexity:O(nlogn)
  Space Complexity:O(1)
*/
int minOperation(int*a,int n){
    sort(a,a+n);
    int count=1,Max=0;
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1])
           count++;
        else
           count=1;
        Max=max(Max,count);
    }
    return n-Max;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++)
	       cin >> a[i];
	    int ans = minOperation(a,n);
	    cout << ans << endl;
	    
	}
	return 0;
}
