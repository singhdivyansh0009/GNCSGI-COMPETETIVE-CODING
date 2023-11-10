/* Problem Statement : https://www.codechef.com/practice/course/strings-cpp/PCPPST01/problems/BLOBBYVOLLEY */
/* Time complexity : O(n) */

#include <iostream>
using namespace std;

void findScore(string s, int n){
    char server = 'A';  // initially Alice is a server
    int scoreOfAlice=0, scoreOfBob=0; // initially score of both the player is 0
    for(int i=0; i<n; i++)
    {
        /* if the player who won the game is a server */
        if(s[i]==server&&server=='A')  
           scoreOfAlice++; // if server is Alice increase score of Alice
        else if(s[i]==server&&server=='B')
           scoreOfBob++; // if server is Bob increase score of Bob
        /* if the player who won the game  is not a server */
        else
           server=s[i]; // change the server
    }
    cout << scoreOfAlice <<" "<<scoreOfBob<<endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        findScore(s,n);
    }
	return 0;
}
