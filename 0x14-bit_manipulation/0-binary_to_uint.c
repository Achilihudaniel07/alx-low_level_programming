#include "main.h"



/**

 * binary_to_uint - converts a binary number to an

 * unsigned int.

 * @b: binary.

 *

 * Return: unsigned int.

 */

unsigned int binary_to_uint(const char *b)

{

0-binary_to_uint.c unsigned int ui;

0-binary_to_uint.c int len, base_two;



0-binary_to_uint.c if (!b)

0-binary_to_uint.c 0-binary_to_uint.c return (0);



0-binary_to_uint.c ui = 0;



0-binary_to_uint.c for (len = 0; b[len] != 0; len++)

0-binary_to_uint.c 0-binary_to_uint.c ;



0-binary_to_uint.c for (len--, base_two = 1; len >= 0; len--, base_two *= 2)

0-binary_to_uint.c {

0-binary_to_uint.c 0-binary_to_uint.c if (b[len] != 0 && b[len] != 1)

0-binary_to_uint.c 0-binary_to_uint.c {

0-binary_to_uint.c 0-binary_to_uint.c 0-binary_to_uint.c return (0);

0-binary_to_uint.c 0-binary_to_uint.c }



0-binary_to_uint.c 0-binary_to_uint.c if (b[len] & 1)

0-binary_to_uint.c 0-binary_to_uint.c {

0-binary_to_uint.c 0-binary_to_uint.c 0-binary_to_uint.c ui += base_two;

0-binary_to_uint.c 0-binary_to_uint.c }

0-binary_to_uint.c }



0-binary_to_uint.c return (ui);

}
