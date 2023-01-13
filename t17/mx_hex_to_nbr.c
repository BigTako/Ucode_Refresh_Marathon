#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool mx_isalpha(int c)
{
	return (c > 64 
		&& c < 91) 
			|| (c > 96 
				&& c < 123);
}

bool mx_isdigit(int c)
{
	return c > 47 
		&& c < 58;
}

bool mx_islower(int c)
{
    return c > 96 
    		&& c < 123;
}

bool mx_isupper(int c)
{
    return c > 64 
    		&& c < 91;
}

unsigned long mx_hex_to_nbr(const char *hex)
{
	if (!hex) return 0;
	unsigned long base = 1;
    	unsigned long dec_val = 0;
	int len = 0;
	for (; hex[len] != '\0'; len++);
	for (int i = len - 1; i >= 0; i--) {
		if (mx_isdigit(hex[i])) {
		    dec_val += (int)(hex[i] - 48) * base;
		    base = base * 16;
		}	 
		else if (mx_isalpha(hex[i])) {
			if (mx_isupper(hex[i]))
		    		dec_val += (int)(hex[i] - 55) * base;
		    	else if (mx_islower(hex[i]))
		    		dec_val += (int)(hex[i] - 87) * base;
		    	base = base * 16;
		} else return 0;
	}
	return dec_val;
}


