/* problem statement : https://www.codechef.com/problems/ALTERADD?tab=submissions */
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
