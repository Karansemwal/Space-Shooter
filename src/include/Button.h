#pragma once
#include <SFML/Graphics.hpp>

class Button
{
public:
    Button(sf::RenderWindow& win);
    Button(sf::RenderWindow& win, const sf::Texture& texture);
    ~Button();

    bool isClicked();
    bool mouseIsOverButton();

    sf::RectangleShape& getButton() { return this->button; }
    
    inline void setButtonPos (const sf::Vector2f& pos)    { button.setPosition(pos); }
    inline void setButtonText(const sf::Texture& texture) { button.setTexture(&texture); }
    inline void setButtonSize(const sf::Vector2f& size)   { button.setSize(size); }

    inline void render() { window.draw(this->button); }

private:
    void init();

private:
    sf::RenderWindow& window;
    sf::RectangleShape button;
    sf::Texture buttonText;
};