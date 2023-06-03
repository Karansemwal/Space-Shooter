#ifndef SPACE_SHOOTER_SHIP_H
#define SPACE_SHOOTER_SHIP_H

#include <SFML/Graphics.hpp>

class Ship
{
public:
    Ship();
    Ship(float width, float height);
    ~Ship() {}

    inline sf::Vector2f& getVel() { return m_vel; }
    inline void setVel(sf::Vector2f vel) { m_vel = vel; }

    inline sf::RectangleShape& getShip() { return m_ship; }

    inline sf::Vector2f getFacingDir()   { return m_facingDir; }

    inline float getcurrentAngle() const { return m_currentAngle; }
    inline void  setcurrentAngle(float angle) { m_currentAngle = angle; }

    void onCollisionWithWall(int Collision_Side);
    void shipMovement();
    void rotationMovement();

    void calcFacingDir();

    void render(sf::RenderWindow& window);

private:
    sf::RectangleShape m_ship;
    sf::Vector2f m_vel;
    sf::Vector2f m_facingDir;
    float m_currentAngle;
    float m_rotationAngle;
};

#endif //SPACE_SHOOTER_SHIP_H
