# Primitive types in CPP

**Modifiers:**
 - signed: is the default modifier, when it is hidden, then the primitive is signed; means that there will be negative values
 - unsigned: must be explicit; means there will not be negative values, and thus, the maximum positive value increases (but the capacity is the same)
 - short: divides the size of data by two, reducing its capacity (does not apply to char)
 - long: doubles the size of data, increasing its capacity (does not apply to char)

| Type  | Size | Range |
| ---- | ---- | ---- |
| char | 1 byte | -128 to 127 |
| signed char | 1 byte | -128 to 127 |
| unsigned char | 1 byte | 0 to 255 |
| int | 4 bytes | -2147483648 to 2147483647 |
| short int | 2 bytes | -32768 to 32767 |
| long int | 8 bytes | -9223372036854775808 to 9223372036854775807|
| unsigned int | 4 bytes | 0 to 4294967295 |
| unsigned long int | 8 bytes | 0 to 18446744073709551615|
| float | 4 bytes | 1.17549e-38 to 3.40282e+38 |
| double | 8 bytes | 8 bytes | 2.22507e-308 to 1.79769e+308 |
| long double | 16 bytes | 3.3621e-4932 to 1.18973e+4932 |

In some cases, depending on platform, long long can be wider than just long.

If you need a specific integer size for a particular application, rather than trusting the compiler to pick the size you want, #include <stdint.h> (or <cstdint>) so you can use these types:
 - int8_t and uint8_t
 - int16_t and uint16_t
 - int32_t and uint32_t
 - int64_t and uint64_t

