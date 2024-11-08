#include <SFML/Graphics.hpp>

struct Bricks{
    sf::Vector2f position;
    sf::Color color;
    bool isDestroyed;
};

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 600), "balls break out");
    sf::RectangleShape player(sf::Vector2f(100, 20));
    player.setPosition(sf::Vector2f(350, 500));
    player.setFillColor(sf::Color::Black);
    player.setOutlineColor(sf::Color::White);
    player.setOutlineThickness(3);

    float speed = 600.0f;
    sf::Clock clock;

    sf::CircleShape ball(10);
    ball.setPosition(sf::Vector2f(400, 300));
    sf::Vector2f ballVelocity = sf::Vector2f(250.0f, 200.0f);
    ball.setFillColor(sf::Color::White);
    sf::Vector2f ballPosition = sf::Vector2f(400.0f, 300.0f);

    Bricks bricks[10*5];
    int i =0;
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 5; y++){
            bricks[i].position = sf::Vector2f(x * 45 + 350 / 2, y * 40 + 20);
            bricks[i].color = sf::Color::Red;
            bricks[i].isDestroyed = false;
            i++;
        }
    }


    while (window.isOpen())
    {
        float dt = clock.restart().asSeconds();


        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && player.getPosition().x > 3)
        {
            player.move(-speed * dt, 0);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && player.getPosition().x < 697)
        {
            player.move(speed * dt, 0.0f);
        }

        if (ballPosition.y + 20> 600){
            ballVelocity.y *= -1;
            ballPosition.y = 600 - 20;
        }
        if (ballPosition.y < 0){
            ballVelocity.y *= -1;
            ballPosition.y = 0;
        }
        if (ballPosition.x + 20> 800){
            ballVelocity.x *= -1;
            ballPosition.x = 800 - 20;
        }
        if (ballPosition.x < 0){
            ballVelocity.x *= -1;
            ballPosition.x = 0;
        }

        

        ballPosition.y += ballVelocity.y * dt;
        ballPosition.x += ballVelocity.x * dt;

        if(ballPosition.x + 20 >= player.getPosition().x && ballPosition.x <= player.getPosition().x + 100 && ballPosition.y + 20 >= player.getPosition().y && ballPosition.y <= player.getPosition().y + 20){
            ballVelocity.y *= -1;
        }

        window.clear();
        sf::RectangleShape brick(sf::Vector2f(40.f, 20.0f));
        for(int i = 0; i < 10*5; i++){
            if(bricks[i].isDestroyed == false){
                brick.setPosition(bricks[i].position.x, bricks[i].position.y);
                brick.setFillColor(bricks[i].color);
                window.draw(brick);
            }
        }

        for (int i = 0; i < 10*5; i++){
            if (bricks[i].isDestroyed == false){
                if(ballPosition.x + 20 >= bricks[i].position.x && ballPosition.x <= bricks[i].position.x + 40 && ballPosition.y + 20 >= bricks[i].position.y && ballPosition.y <= bricks[i].position.y + 20){
                    ballVelocity.y *= -1;
                    bricks[i].isDestroyed = true;
                }
            }
        }
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        
        window.draw(player);
        ball.setPosition(ballPosition.x, ballPosition.y);
        window.draw(ball);
        window.display();
}
}