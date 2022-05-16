#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Checking a string whether it is a palindrome
void isPalindrome(string s)
{
    short int i;
    for (i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            break;
        }
    }
    if (i == s.length() / 2)
    {
        cout << s << " is a palindrome" << endl;
    }
    else
    {
        cout << s << " is not a palindrome" << endl;
    }
}