/*Problem Statement: https://www.codechef.com/practice/course/arrays-cpp/PCPPAR01/problems/CS2023_STK?tab=statement*/

#include <iostream>
using namespace std;
string longerMaximumStreak(int*A,int*B,int n){
    int longestStreakOfAddy=0,longestStreakOfOm=0;
    int currentStreakOfAddy=0,currentStreakOfOm=0;
    for(int i=0; i < n; i++){
        if(A[i])
        {
          currentStreakOfOm++;
          longestStreakOfOm=max(longestStreakOfOm,currentStreakOfOm);
        }
        else 
           currentStreakOfOm=0;
        if(B[i])
        {
           currentStreakOfAddy++;
           longestStreakOfAddy=max(longestStreakOfAddy,currentStreakOfAddy);
        }
        else 
            currentStreakOfAddy=0;
    }
    if(longestStreakOfAddy>longestStreakOfOm)
        return "ADDY";
    else if(longestStreakOfAddy<longestStreakOfOm)
        return "OM";
    else
        return "DRAW";
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int A[n],B[n];
	    for(int i=0; i<n; i++)
	       cin >> A[i];
	    for(int i=0; i<n; i++)
	       cin >> B[i];
	    string ans = longerMaximumStreak(A,B,n);
	    cout << ans << endl;
	}
	return 0;
}
