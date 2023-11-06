#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;  // taking total no. of students and no. of passed student
	    int  A[n];
	    for(int i = 0; i < n; i++)
	      cin >> A[i];   // taking marks of student
	    sort(A,A+n);  // sorting the array of marks 
	    cout << A[n-x]-1 << endl;  
	    
	}
	return 0;
}
