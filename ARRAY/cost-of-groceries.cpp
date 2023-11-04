#include <iostream>
using namespace std;

int costOfGroceries(int NoOfitems, int minFreshness, int *freshnessValue, int * costOfItem){
    int totalCost = 0;
    for(int i = 0; i < NoOfitems; i++)  // it run for all the items
    {
     /* if the freshnessValue of ith item is greater than minimum Freshness value then add the cost of that item in totalCost */
        if(freshnessValue[i] >= minFreshness) {
           totalCost += costOfItem[i];  
        }
    }
    return totalCost;
}

int main() {
	int t; 
	cin >> t; // taking no. of testcase as input
	while(t--) // it run until the no. of test does'nt became 0
	{   
	    int N, X;
	    cin >> N >> X;   //taking no. of items and minimum freshness value
	    
	    int A[N],B[N];
	    for(int i = 0; i < N; i++) // taking freshness value of each items
	        cin >> A[i];           
	    for(int i = 0; i < N; i++) // taking cost of each items
	        cin >> B[i];
	  /*  calling the function to getting total cost of items having freshness value greater than X  */
	  cout << costOfGroceries(N,X,A,B) << endl; 
	}
	return 0;
}
