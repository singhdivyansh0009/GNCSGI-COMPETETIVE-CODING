/* problem statement : https://www.codechef.com/problems/ALTERADD?tab=submissions */

/*  Time complexity : O(1) */
/* Approach : 
    -> take out the diffrence of both the number
    -> if difference is less than 3 then only for 2 it is not possible to equate both the number
       because if the differnce is 1 and 3 you can equate by performing 1st operation and 2nd operation
    -> if the diff. is equal to and greater than 3 then find the mod of the diff with 3
       if dif % 3 == 0 or dif % 3 == 1 then it is possible to equate 
       a = 5  b = 8            
       dif = 3                
       1st op. = 5 + 1 = 6    
       2nd op. = 6 + 2 = 8     
       For these pair of operation we are doing mod with 3
       then the next operation is always be odd means adding 1
       thats why if we get 2 after mod is not possible .
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int dif = b - a; 
        if(dif < 3 && dif == 2) 
            cout << "NO" << endl;
        else if(dif < 3 && dif != 2) 
            cout << "YES" << endl;
        else if (dif >= 3 &&(dif % 3 == 0 || dif % 3 == 1) )  
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
