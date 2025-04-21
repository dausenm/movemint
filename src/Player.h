#pragma once

#include <glm/glm.hpp>

class Player {
public:
    Player();

    void Update(float deltaTime);
    void MoveLeft(float deltaTime);
    void MoveRight(float deltaTime);
    void MoveForward(float deltaTime);
    void MoveBack(float deltaTime);
    void Jump();

    glm::vec2 GetPosition() const;

private:
    glm::vec2 position;
    glm::vec2 velocity;
    float speed;
    float jumpStrength;
    float gravity;
    bool isGrounded;
};
