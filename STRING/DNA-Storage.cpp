/* problem statement : https://www.codechef.com/practice/course/strings-cpp/PCPPST01/problems/DNASTORAGE */
/*
   Time complexity: O(n)
   Explaination :
       Input : -> For taking t and N as input it takes O(1) time
               -> For taking string S as input it takes O(n) time because it take input of length n
       Encode function : -> The loop takes O(N/2) time because the loop will run half of the length of string
                        as we are using pair of character
                         -> if else condition took O(1) time
       Output : -> The encoded string will be half the length of the binary string
              so, it took O(N/2) to print the encoded string
       Overall Time complexity : O(n) + O(n/2) + O(n/2) = O(n)
       Note : we are neglecting the loop for test case 
*/
#include <iostream>
using namespace std;

string Encode(string s,int lengthOfString){
    string EncodedString;
    for(int i = 0; i < lengthOfString; i+=2) // incrementing the loop by 2 because we are using pairs
    {
       /* comparing the pairs of character in binary string and 
        added its equivalent character given in problem to the EncodedString */
        if(s[i]=='0' && s[i+1]=='0') 
           EncodedString += 'A';
        else if(s[i]=='0' && s[i+1]=='1')
           EncodedString += 'T';
        else if(s[i]=='1' && s[i+1]=='0')
           EncodedString += 'C';
        else
           EncodedString += 'G';
    }
    return EncodedString;  // returning the Encodedstring 
}

int main() {
	int t;
	cin >> t;  // taking no. of test cases
	while(t--){
	    int N;
	    cin >> N;  // taking length of string
	    string S;
	    cin >> S;  // taking the string
	   string ans = Encode(S,N);  // calling Encode function which Encode the Binary string
	   cout << ans << endl;
	}
	return 0;
}
