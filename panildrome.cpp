#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string &s)
{
    int n = s.length();

    for(int i=0; i<n; i++)
    {
        if(s[i] != s[n-i-1])
            return false;
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter a string to check for palindrome: ";
    cin >> s;

   
    if (isPalindrome(s))
        cout << s << " is a palindrome." << endl;
    else
        cout << s << " is not a palindrome." << endl;
    
    return 0;
}
