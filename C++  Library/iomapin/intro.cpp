/*

**independent flags**
1. boolalpha	    read/write bool elements as alphabetic strings (true and false).
2. showbase	        write integral values preceded by their corresponding numeric base prefix.
3. showpoint	    write floating-point values including always the decimal point.
4. showpos	        write non-negative numerical values preceded by a plus sign (+).
5. skipws	        skip leading whitespaces on certain input operations.
6. unitbuf      	flush output after each inserting operation.
7. uppercase	    write uppercase letters replacing lowercase letters in certain insertion operations.

**numerical base**
1. dec	            read/write integral values using decimal base format.
2. hex	            read/write integral values using hexadecimal base format.
3. oct	            read/write integral values using octal base format.

**float format**
1. fixed	        write floating point values in fixed-point notation.
2. scientific	    write floating-point values in scientific notation.

**adjustment**
1. internal	        the output is padded to the field width by inserting fill characters at a specified internal point.
2. left	            the output is padded to the field width appending fill characters at the end.
3. right	        the output is padded to the field width by inserting fill characters at the beginning. 

*/

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // Initializing the integer
    int num = 1000;

    cout << num << endl;                                                           // --> No effect
    cout << "Octal        : " << oct << num << endl;                               // manipulate to octal
    cout << "Hexadecimal  : " << hex << setiosflags(ios::showbase) << num << endl; // manipulate to hexadecimal
    cout << "Decimal      : " << dec << num << endl;                               // manipulate to decimal

    return 0;
}