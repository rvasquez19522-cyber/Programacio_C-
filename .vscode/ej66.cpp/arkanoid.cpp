#include <SFML/Graphics.hpp>
#include <vector>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Arkanoid");
    window.setFramerateLimit(60);

    // Barra
    sf::Texture paddleTexture;
    paddleTexture.loadFromFile("paddle.png");
    sf::Sprite paddle(paddleTexture);
    paddle.setPosition(350, 550);

    // Bola
    sf::Texture ballTexture;
    ballTexture.loadFromFile("ball.png");
    sf::Sprite ball(ballTexture);
    ball.setPosition(390, 500);
    sf::Vector2f ballVelocity(4.f, -4.f);

    // Ladrillos
    sf::Texture brickTexture;
    brickTexture.loadFromFile("brick.png");
    std::vector<sf::Sprite> bricks;
    for(int i=0; i<5; ++i)
        for(int j=0; j<10; ++j){
            sf::Sprite brick(brickTexture);
            brick.setPosition(j*80, i*30);
            bricks.push_back(brick);
        }

    bool gameStarted = false;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if(event.type == sf::Event::Closed)
                window.close();
            if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
                gameStarted = true;
        }

        // Movimiento barra
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && paddle.getPosition().x > 0)
            paddle.move(-6.f, 0.f);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && paddle.getPosition().x < 720)
            paddle.move(6.f, 0.f);

        // Mover bola si el juego empezó
        if(gameStarted){
            ball.move(ballVelocity);

            // Rebote paredes
            if(ball.getPosition().x < 0 || ball.getPosition().x > 760)
                ballVelocity.x = -ballVelocity.x;
            if(ball.getPosition().y < 0)
                ballVelocity.y = -ballVelocity.y;

            // Rebote barra
            if(ball.getGlobalBounds().intersects(paddle.getGlobalBounds()))
                ballVelocity.y = -ballVelocity.y;

            // Rebote ladrillos
            for(auto it = bricks.begin(); it != bricks.end();){
                if(ball.getGlobalBounds().intersects(it->getGlobalBounds())){
                    ballVelocity.y = -ballVelocity.y;
                    it = bricks.erase(it);
                } else ++it;
            }
        }

        window.clear(sf::Color::Black);
        for(auto &b : bricks) window.draw(b);
        window.draw(paddle);
        window.draw(ball);
        window.display();
    }

    return 0;
}