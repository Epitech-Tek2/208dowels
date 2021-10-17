/*
** EPITECH PROJECT, 2021
** teams
** File description:
** macro
*/

#pragma once

#include <errno.h>
#include <string.h>
#include "../../includes/generics.h"
#include "../../includes/list.h"

#define findc(fc, c, ...) findc(fc, c, _N__ARG(__VA_ARGS__), ##__VA_ARGS__)

#include "inline.h"

#define cErr(error) dprintf(2, "%s\n", error);

#define my_free(ptr, ...) my_free(_N__ARG(__VA_ARGS__), ptr, ##__VA_ARGS__)

#define my_fclose(ptr, ...) my_fclose(_N__ARG(__VA_ARGS__), ptr, ##__VA_ARGS__)

#define my_exist(ptr, ...) my_exist(_N__ARG(__VA_ARGS__), ptr, ##__VA_ARGS__)

#define eraise(...) ({ \
    fprintf(stderr, "%s:%s:%d %s\n", __FILE__, __func__, \
        __LINE__, strerror(errno)); \
    my_free(NULL, ##__VA_ARGS__); \
    exit(84); \
})

#define eraise_with_help(message) ({ \
    cErr(message); \
    helper(84); \
})

#define uraise(error, ...) ({ \
    cErr(error); \
    my_free(NULL, ##__VA_ARGS__); \
    exit(84); \
})

#pragma GCC diagnostic ignored "-Wformat"

#define lambda(type, name, function_body) ({ \
    void __fn__ (type name) function_body; \
    __fn__; \
})

#define __foreach_arr(arr, fn) ({ \
    void (*func)(char **) = lambda(char **, arr, { \
        for (int i = 0; arr[i]; i++) { fn(arr[i]); } \
    }); \
    func(arr); \
})

#define __foreach_int(arr, fn) ({ \
    void (*func)(int *) = lambda(int *, arr, { \
        for (int i = 0; arr[i] != -1; i++) { fn(arr[i]); } \
    }); \
    func(arr); \
})

#define __foreach_list(arr, fn) ({ \
    void (*func)(list *) = lambda(list *, arr, { \
        for (int i = 0; ((list *)arr)->size(arr) != i; i++) { fn(((list *)arr)->valueof(arr, i)); } \
    }); \
    func((list *)arr); \
})

#define foreach(__list, fn) \
    _Generic((__list), \
        char **: __foreach_arr(__list, fn), \
        int *: __foreach_int(__list, fn), \
        list *: __foreach_list(__list, fn) \
    )

#pragma GCC diagnostic pop