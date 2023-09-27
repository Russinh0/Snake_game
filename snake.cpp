#include <iostream>
#include "coordinates.cpp"
#include <vector>
class Snake
{
public:
    int size;

    int increase_size(int to_increase){
        size+=to_increase;
    };
    void decrease_size(int to_decrease){
        size-=to_decrease;
    };
};