#include "cpuPaddle.h"

void CpuPaddle::update(int ball_y) {
        if (y - height / 2 > ball_y)
        {
            y = y - speed;
        }
        
        if (y + height / 2 < ball_y)
        {
            y = y + speed;
        }
        LimitMovement();
    }
    