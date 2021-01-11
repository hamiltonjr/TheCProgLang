#include "utils.h"

/*
 * This function implements conversion from string to float.
 *
 * input..: a string with a floatting-point number representa-
 * tion.
 * output.: a floatting-point number.
 *
 * OBS: this version handle scientific notation.
 */ 
double atof(char *s)
{
    double val, power;
    register size_t i;
    int sign, psign, expn;
 
    // skip spaces
    for (i = 0; isspace(*(s + i)); ++i);

    // define signal
    sign = (*(s + i) == '-') ? -1 : 1;

    // skip signal after determined
    if (*(s + i) == '+' || *(s + i) == '-') i++;

    // define integer part of number
    for (val = 0.0; isdigit(*(s + i)); ++i)
    {
       val = BASE * val + (*(s + i) - '0');
    }

    // skip floatting-point 
    if (*(s + i) == '.') i++;

    // define fractional part of number
    for (power = 1.0; isdigit(*(s + i)); ++i)
    {
        val = BASE * val + (*(s + i) - '0');
        power *= BASE;
    }

    /* 
     * Extra implementation for handle scientific
     * notation.
     */
    // skip scientific notation e or E 
    if (*(s + i) == 'e' || *(s + i) == 'E') i++;

    // define scirntific notation signal
    psign = (*(s + i) == '-') ? -1 : 1;

    // skip signal after determined
    if (*(s + i) == '+' || *(s + i) == '-') i++;

    // define exponent for scintific notation
    for (expn = 0.0; isdigit(*(s + i)); ++i)
    {
       expn = BASE * expn + (*(s + i) - '0');
    }

    // finalize power definition
    for ( ; expn > 0; --expn)
    {
        if (psign > 0)
        {
            power /= BASE;
        } else 
        {
            power *= BASE;
        }
    }

    return sign * val / power;
}
