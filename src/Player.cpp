#include "Player.h"

Player::Player()
    : position(0.0f, 0.0f),
      velocity(0.0f, 0.0f),
      speed(0.5f),
      jumpStrength(1.5f),
      gravity(-3.0f),
      isGrounded(true)
{
}

void Player::Update(float deltaTime) {
    // Apply gravity
    velocity.y += gravity * deltaTime;

    // Update position
    position += velocity * deltaTime;

    // Simple ground collision (assume ground is y = -0.9 for now)
    if (position.y <= -0.9f) {
        position.y = -0.9f;
        velocity.y = 0.0f;
        isGrounded = true;
    }
}


void Player::MoveLeft(float deltaTime) {
    position.x -= speed * deltaTime;
}

void Player::MoveRight(float deltaTime) {
    position.x += speed * deltaTime;
}

void Player::MoveForward(float deltaTime) {
    position.x += speed * deltaTime;
}

void Player::MoveBack(float deltaTime) {
    position.y -= speed * deltaTime;
}

void Player::Jump() {
    if (isGrounded) {
        velocity.y = jumpStrength;
        isGrounded = false;
    }
}

glm::vec2 Player::GetPosition() const {
    return position;
}
