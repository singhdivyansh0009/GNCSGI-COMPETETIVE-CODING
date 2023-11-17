/*Problem : https://www.codechef.com/problems/ZEROSTRING */

#include <iostream>
using namespace std;
int minOperation(string s,int n){
    int oneCount=0,zeroCount=0;
    for(int i = 0; i < n; i++){
        if(s[i]=='1')
           oneCount++; // count the no. of 1 in the string
        else
           zeroCount++; // count the no. of 0 in the string
    }
    /* if no. of 1 is less than 0 or equal to zero 
       Ex: 1110000
          here minimum operation to make it zero is deleting all the 1
       Ex:11100
          here minimum operation to make it zero is fliping then delete all 1
    */
    if(oneCount<=zeroCount)  
       return oneCount;
    else
       return zeroCount+1;
     
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = minOperation(s,n);
        cout << ans << endl;
    }
	return 0;
}
