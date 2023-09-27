#include <stdio.h>

class Coordinates
{
public:
    int x;
    int y;

    int increase_x(int num){
        x+=num;
    };
        int decrease_x(int num){
        x-=num;
    };
        int increase_y(int num){
        y+=num;
    };
    int decrease_y(int num){
        y-=num;
    };
};