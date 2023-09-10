#ifndef TRIM
#define TRIM

// Trims the string a and returns the len of trimmed string.
extern long trim(char * a);

// Trims the string a of length l and returns the len of trimmed string.
extern long triml(char * a, long l);

// Frees trim internal buffer.
extern void freetrim(void);

#endif
