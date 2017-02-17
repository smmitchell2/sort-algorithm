#ifndef __COMPARATOR_INCLUDED__
#define __COMPARATOR_INCLUDED__

typedef int (*Comparator)(void*,void*);
typedef void (*Printer)(FILE*,void*);

extern int intComp(void *a,void *b);
extern int stringComp(void *a, void *b);
extern int realComp(void *a, void *b);

#endif
