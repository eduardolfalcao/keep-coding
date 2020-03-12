#include<iostream> 
#include<limits.h> 
#include<float.h>

using namespace std; 
  
int main(){

	cout << "Size of char : " << sizeof(char)  << " byte; Minimum value for char: " << CHAR_MIN << "; Maximum value for char: " << CHAR_MAX << endl;
	cout << "Size of signed char : " << sizeof(signed char)  << " byte; Minimum value for signed char: " << SCHAR_MIN << "; Maximum value for signed char: " << SCHAR_MAX << endl;
	cout << "Size of unsigned char : " << sizeof(unsigned char)  << " byte; Minimum value for unsigned char: " << 0 << "; Maximum value for unsigned char: " << UCHAR_MAX << endl << endl;
	
	
	cout << "Size of int : " << sizeof(int)  << " bytes; Minimum value for int: " << INT_MIN << "; Maximum value for int: " << INT_MAX << endl;
	cout << "Size of short int : " << sizeof(short int)  << " bytes; Minimum value for short int: " << SHRT_MIN << "; Maximum value for short int: " << SHRT_MAX << endl;
	cout << "Size of long int : " << sizeof(long int)  << " bytes; Minimum value for long int: " << LONG_MIN << "; Maximum value for long int: " << LONG_MAX << endl<< endl;
	
	cout << "Size of unsigned int : " << sizeof(unsigned int)  << " bytes; Minimum value for unsigned int: " << 0 << "; Maximum value for unsigned int: " << UINT_MAX << endl;
	cout << "Size of unsigned long int : " << sizeof(unsigned long int)  << " bytes; Minimum value for unsigned long int: " << 0 << "; Maximum value for unsigned long int: " << ULONG_MAX << endl << endl;

	cout << "Size of signed int : " << sizeof(signed int) << " bytes" << endl;
	cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl << endl; 
	
	cout << "Size of long : " << sizeof(long) << " bytes" << endl; 
	cout << "Size of long long: " << sizeof(long long) << " bytes" << endl << endl; 
	

	cout << "Size of float : " << sizeof(float)  << " bytes; Minimum value for float: " << FLT_MIN << "; Maximum value for int: " << FLT_MAX << endl;
	cout << "Size of double : " << sizeof(double)  << " bytes; Minimum value for double: " << DBL_MIN << "; Maximum value for double: " << DBL_MAX << endl;
	cout << "Size of long double: " << sizeof(long double)  << " bytes; Minimum value for long double: " << LDBL_MIN << "; Maximum value for long double: " << LDBL_MAX << endl;
					          
        return 1; 
}
