#ifndef _DO_PRINT_H
#define _DO_PRINT_H

#include <uspi/stdarg.h>

int _doprnt(const char *fmt, va_list ap,
            int (*putc_func)(int, int), int putc_arg);

#endif