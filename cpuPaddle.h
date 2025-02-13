#pragma once
#include "paddle.h"

class CpuPaddle : public Paddle {
public:
    void update(int ball_y);
};
