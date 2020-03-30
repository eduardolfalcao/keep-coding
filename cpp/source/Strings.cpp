#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    cout << "Basic I/O with Strings:\n";
    // Read a character.
    char c;
    cin >> c;
    cout << "Char: " << c << "\n";
    
    // Read a word.
    string w;
    cin >> w;
    cout << "Word: " << w << "\n";
    cin.ignore(); // Extract and discard characters from the previous entry.
    
    // Read a line.
    string l;
    getline(cin, l);
    cout << "line: " << l << "\n";
    cin.clear(); // Clears the error flag on cin (so that future I/O operations will work correctly).
    
    // Read multiple lines.
    int i = 1;
    while(getline(cin, l))
    {
        cout << "Line " << i << ": " << l << "\n";
        i++;
    }
    
    cout << "\nThe C-Style Character String:\n";
    
    char str1[15] = "Hello";
    char str2[15] = "World";
    char str3[15];
    char str4[10] = "A";
    
    // Copy str1 into str3
    strcpy(str3, str1);
    cout << "strcpy(str3, str1): " << str3 << "\n";
    
    // Concatenates str1 and str2
    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << "\n";
    
    // Total lenghth of str1 after concatenation
    int len = strlen(str1);
    cout << "strlen(str1): " << len << "\n";
    
    // Compare strings.
    cout << "strcmp(str1, str2): " << strcmp(str1, str2) << "\n";
    cout << "strcmp(str1, str3): " << strcmp(str1, str3) << "\n";
    cout << "strcmp(str4, str4): " << strcmp(str4, str4) << "\n";
    
    // Returns a pointer to the first occurrence of character str2[2] in string str1.
    cout << "strchr(str1, str2[2]): " << strchr(str1, str2[2]) << "\n";
    
    // Returns a pointer to the first occurrence of string str2 in string str1.
    cout << "strstr(str1, str2): " << strstr(str1, str2) << "\n";
    
    cout << "\nThe String Class in C++:\n";
    
    string s1 = "Hello";
    string s2 = " World";
    string s3;
    
    
    // Copy s1 into s3.
    s3 = s1;
    cout << "s3: " << s3 << "\n";
    
    // Concatenates s1 and s2.
    s1 += s2;
    cout << "s1: " << s1 << "\n";
    
    // Total lenghth of s1 after concatenation.
    cout << "s1.size(): " << s1.size() << "\n";
    
    return 0;
}