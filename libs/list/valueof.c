/*
** EPITECH PROJECT, 2021
** teams
** File description:
** valueof
*/

#include "include/list.h"

char *valueof(list *_this, size_t const _i)
{
    list *current = _this;
    size_t size = current->size(current);

    for (size_t i = 0; i < size; i++) {
        if (_i == i) return current->_value;
        current = current->__metadata._next;
    }
    return NULL;
}