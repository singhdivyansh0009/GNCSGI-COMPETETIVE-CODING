/*Problem Statement : https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PREP17 */
/*
  Time Complexity : O(nlogn)
  Space Complexity : O(1)
*/
#include <iostream>
#include <algorithm>
using namespace std;
int commonElementsCount(int n,int* a, int* b){
      sort(a,a+n);
      sort(b,b+n);
      int count = 0;
      int i=0,j=0;
      while(i<n && j<n){
          if(a[i]==b[j])
          {
             count++;
             i++; j++;
          }
           else if(a[i]>b[j])
               j++;
           else
               i++;
      }
      return count;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n],b[n];
	    for(int i=0; i < n; i++)
	        cin >> a[i];
	    for(int i=0; i < n; i++)
	        cin >> b[i];
	    int ans = commonElementsCount(n,a,b);
	    cout << ans << endl;
	}
	return 0;
}
