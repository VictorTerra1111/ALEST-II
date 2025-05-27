#ifndef LIST_HPP
#define LIST_HPP

#include "point.hpp"

class list_c
{
private:
    point_t ponto;
    int size = 30;
    point_t array[30];
public:
    list_c(point_t pnt, int vsize = 30);

    void add(point_t pnt);

    point_t remove(point_t pnt);
};

#endif