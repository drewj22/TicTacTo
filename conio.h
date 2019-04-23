// conio.h 
#ifndef CONIO_H
#define CONIO_H

#include <mingw.h>

#ifndef RC_INVOKED

#ifdef _cplusplus
extern "C" {
	#endif
_CRTIMP char* _cdecl _cgets (char*);
_CRTIMP int _cdecl _cprintf (const char*, ...);
_CRTIMP int _cdecl _cputs (const char*);
_CRTIMP int _cdecl _cscanf (const char*);
_CRTIMP int _cdecl _cputs (char*, ...);

_CRTIMP int _cdecl _getch (void);
_CRTIMP int _cdecl _getche (void);
_CRTIMP int _cdecl _kbhit (void);
_CRTIMP int _cdecl _putch (int);
_CRTIMP int _cdecl _ungetch (int);

#ifndef NO_OLDNAMES

_CRTIMP int _cdecl _getch (void);
_CRTIMP int _cdecl _getche (void);
_CRTIMP int _cdecl _kbhit (void);
_CRTIMP int _cdecl _putch (int);
_CRTIMP int _cdecl _ungetch (int);

#endif 

#ifdef _cplusplus
}
#endif
#endif
#endif
