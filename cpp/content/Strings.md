# Strings

Strings are objects that represent sequences of characters.

The standard string class provides support for such objects with an interface similar to that of a standard container of bytes, but adding features specifically designed to operate with strings of single-byte characters.

The string class is an instantiation of the basic_string class template that uses char (i.e., bytes) as its character type, with its default char_traits and allocator types.

## Example

<p align="center">
<img src="https://www.tutorialspoint.com/cplusplus/images/string_representation.jpg">
</p>

## Include string library

```cpp
#include <string.h>
```

## Operations

### Iterators:

**begin():** Return iterator to beginning.  
**end():** Return iterator to end.  
**rbegin():** Return reverse iterator to reverse beginning.  
**rend():** Return reverse iterator to reverse end.  

#### C++ 11

**cbegin():** Return const_iterator to beginning.  
**cend():** Return const_iterator to end.  
**crbegin():** Return const_reverse_iterator to reverse beginning.
**crend():** Return const_reverse_iterator to reverse end.

### Capacity:

**size():** Return length of string.  
**length():** Return length of string.  
**max_size():** Return maximum size of string.  
**resize():** Resize string.  
**capacity():** Return size of allocated storage.  
**reserve():** Request a change in capacity.  
**clear():** Clear string.  
**empty():** Test if string is empty.  

#### C++ 11

**shrink_to_fit():** Shrink to fit.  

### Element access:

**operator []:** Get character of string.  
**at():** Get character in string.  

#### C++ 11

**back():** Access last character.  
**front():** Access first character.  

### Modifiers:

**operator +=:** Append to string.  
**append():** Append to string.  
**push_back():** Append character to string.  
**assign():** Assign content to string.  
**insert():** Insert into string.
**erase():** Erase characters from string.  
**replace():** Replace portion of string.  
**swap():** Swap string values.  

#### C++ 11

**pop_back():** Delete last character.  

### String operations:

**c_str():** Get C string equivalent.  
**data():** Get string data.  
**get_allocator():** Get allocator.  
**copy():** Copy sequence of characters from string.  
**find():** Find content in string.  
**rfind():** Find last occurrence of content in string.  
**find_first_of():** Find character in string.  
**find_last_of():** Find character in string from the end.  
**find_first_not_of():** Find absence of character in string.
**find_last_not_of():** Find non-matching character in string from the end.  
**substr():** Generate substring.  
**compare():** Compare strings.  

### Copying:

**memcpy():** Copy block of memory.  
**memmove():** Move block of memory.  
**strcpy(s1, s2):** Copies string s2 into string s1.  
**strncpy():** Copy characters from string.  

### Concatenation:

**strcat(s1, s2):** Concatenates string s2 onto the end of string s1.  
**strncat():** Append characters from string.  

### Comparison:

**memcmp():** Compare two blocks of memory.  
**strcmp(s1, s2):** Returns 0 if s1 == s2; less than 0 if s1<s2; greater than 0 if s1>s2.  
**strcoll():** Compare two strings using locale.  
**strncmp():** Compare characters of two strings.  
**strxfrm():** Transform string using locale.

### Searching:

**memchr():** Locate character in block of memory.  
**strchr(s1, ch):** Returns a pointer to the first occurrence of character ch in string s1.  
**strcspn():** Get span until character in string.  
**strpbrk():** Locate characters in string.  
**strrchr():** Locate last occurrence of character in string.  
**strspn():** Get span of character set in string.  
**strstr(s1, s2):** Returns a pointer to the first occurrence of string s2 in string s1.  
**strtok():** Split string into tokens.  
 
### Other:

**memset():** Fill block of memory.  
**strerror():** Get pointer to error message string.  
**strlen(s1):** Returns the length of string s1.   

## Sample code

```cpp
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
```

#### Input

```
C
Hello
Hello World!!!
Lorem ipsum dolor sit amet, 
consectetur adipiscing elit. 
In sed ex id quam commodo interdum vitae quis justo.
```

#### Output

```
Basic I/O with Strings:
Char: C
Word: Hello
line: Hello World!!!
Line 1: Lorem ipsum dolor sit amet, 
Line 2: consectetur adipiscing elit. 
Line 3: In sed ex id quam commodo interdum vitae quis justo.

The C-Style Character String:
strcpy(str3, str1): Hello
strcat(str1, str2): HelloWorld
strlen(str1): 10
strcmp(str1, str2): -15
strcmp(str1, str3): 87
strcmp(str4, str4): 0
strchr(str1, str2[2]): rld
strstr(str1, str2): World

The String Class in C++:
s3: Hello
s1: Hello World
s1.size(): 11
```

## Problems

**URI** - [LED](https://www.urionlinejudge.com.br/judge/pt/problems/view/1168)  
**URI** - [Criptografia](https://www.urionlinejudge.com.br/judge/pt/problems/view/1024)  
**URI** - [Frequência de Letras](https://www.urionlinejudge.com.br/judge/pt/problems/view/1255)  
**URI** - [Justificador](https://www.urionlinejudge.com.br/judge/pt/problems/view/1273)  
**URI** - [Mensagem Oculta](https://www.urionlinejudge.com.br/judge/pt/problems/view/1272)  
**URI** - [Array Hash](https://www.urionlinejudge.com.br/judge/pt/problems/view/1257)  
**URI** - [Teclado Zoeiro](https://www.urionlinejudge.com.br/judge/pt/problems/view/2692)  
**URI** - [HameKameKa](https://www.urionlinejudge.com.br/judge/pt/problems/view/2591)  
**URI** - [Link Bolado](https://www.urionlinejudge.com.br/judge/pt/problems/view/2651)  
  

## References

[Tutorials Point - C++ String](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)  
[C++ - String](http://www.cplusplus.com/reference/string/string/)  
[C++ - String.h](http://www.cplusplus.com/reference/cstring/)  
[URI Online Judge](https://www.urionlinejudge.com.br/judge/pt)  