/*Problem : https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/SMOL?tab=statement */
/*
  Time complexity : O(1)
  Space complexity : O(1)
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    (k!=0)? cout << n%k << endl : cout << n << endl;
	}
	return 0;
}
