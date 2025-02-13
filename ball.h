#pragma once 
#include "globals.h"

class Ball {
public:
    float x, y;
    int speed_x, speed_y;
    int radius;

    void Draw();
    void Update();
    void ResetBall();
};