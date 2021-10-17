/*
** EPITECH PROJECT, 2021
** teams
** File description:
** struct
*/

#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct list list;

typedef struct metadata_s metadata_list;

struct metadata_s {
    list *_next;
    list *_prev;
    list *_first;
    list *_last;
    bool _fnone;
};

struct list {
    char *_value;
    list *(*push_back)(list *_this, char *_value);
    size_t (*size)(list *_this);
    char *(*valueof)(list *_this, size_t const _i);
    void (*ldispose)(list *_this);
    list *(*end)(list *_this);
    char **(*copy)(list *_this);
    metadata_list __metadata;
};
