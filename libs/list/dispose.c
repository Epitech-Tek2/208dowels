/*
** EPITECH PROJECT, 2021
** teams
** File description:
** dispose
*/

#include "include/list.h"

void ldispose(list *_this)
{
    list *tmp;

    for (int i = 0; _this != NULL;) {
        tmp = _this->__metadata._next;
        free(_this->_value);
        free(_this);
        _this = tmp;
    }
    _this = NULL;
}