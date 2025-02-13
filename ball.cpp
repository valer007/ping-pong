#include <raylib.h>
#include "ball.h"
#include "color.h"


void Ball::Draw() {
     DrawCircle(x, y, radius, Yellow);
}

void Ball::Update() {
        x += speed_x;
        y += speed_y;

        if (y + radius >= GetScreenHeight() || y - radius <= 0)
        {
            speed_y *= -1;
        }
        
        if (x + radius >= GetScreenWidth()) { // cpu wins
            cpu_score++;
            ResetBall();
        }
        
        if (x - radius <= 0) // player wins
        {
            player_score++;
            ResetBall();
        }
    }


void Ball::ResetBall() {
        x = GetScreenHeight() / 2;
        y = GetScreenWidth() / 2;

        int speed_choice[2] = {-1, 1};
        speed_x *= speed_choice[GetRandomValue(0, 1)];
        speed_y *= speed_choice[GetRandomValue(0, 1)];
    }