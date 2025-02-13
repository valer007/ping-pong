#pragma once 

class Paddle {
protected:
    void LimitMovement();


public:
    float x, y;
    float speed;
    float width, height;

    void Draw();
    void Update();

};