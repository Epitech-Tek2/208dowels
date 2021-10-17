/*
** EPITECH PROJECT, 2021
** teams
** File description:
** functions
*/

#pragma once

#include "struct.h"

list *push_back(list *_this, char *_value);

size_t size(list *_this);

char *valueof(list *_this, size_t const _i);

void ldispose(list *_this);

list *end(list *_this);

char **copy(list *_this);