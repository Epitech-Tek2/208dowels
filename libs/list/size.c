/*
** EPITECH PROJECT, 2021
** teams
** File description:
** size
*/

#include "include/list.h"

size_t size(list *_this)
{
    size_t size = 1;
    list *current = _this;

    while (current->__metadata._next != NULL) {
        current = current->__metadata._next;
        size++;
    }
    return size;
}