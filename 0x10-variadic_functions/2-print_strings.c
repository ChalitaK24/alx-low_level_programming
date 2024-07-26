#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_str - prints NULL strings
 * @str: string
 *
 * Return: void
 */

void print_string(const char *str) {
    if (str == NULL) {
        str = "(nil)";
    }
    while (*str) {
        _putchar(*str++);
    }
}

void print_strings(const char *separator, const unsigned int n, ...) {
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; i++) {
        const char *str = va_arg(args, const char*);
        print_string(str);

        if (separator != NULL && i < n - 1) {
            const char *sep = separator;
            while (*sep) {
                _putchar(*sep++);
            }
        }
    }

    _putchar('\n');
    va_end(args);
}


