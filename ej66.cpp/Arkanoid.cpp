#include <SFML/Graphics.hpp>
#include <vector>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Arkanoid");

    // Cargar imágenes
    sf::Texture paddleTexture, ballTexture, blockTexture;
    paddleTexture.loadFromFile("paddle.png");
    ballTexture.loadFromFile("ball.png");
    blockTexture.loadFromFile("block.png");

    // Crear la pala
    sf::Sprite paddle(paddleTexture);
    paddle.setPosition(350, 550);

    // Crear la pelota
    sf::Sprite ball(ballTexture);
    ball.setPosition(390, 500);
    sf::Vector2f ballVelocity(0.2f, -0.2f);

    // Crear los bloques
    std::vector<sf::Sprite> blocks;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            sf::Sprite block(blockTexture);
            block.setPosition(60 + j*70, 50 + i*30);
            blocks.push_back(block);
        }
    }

    bool gameStarted = false;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Controles
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            gameStarted = true;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            paddle.move(-0.5f, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            paddle.move(0.5f, 0);

        if (gameStarted) {
            ball.move(ballVelocity);

            if (ball.getPosition().x <= 0 || ball.getPosition().x + ball.getGlobalBounds().width >= 800)
                ballVelocity.x = -ballVelocity.x;
            if (ball.getPosition().y <= 0)
                ballVelocity.y = -ballVelocity.y;

            if (ball.getGlobalBounds().intersects(paddle.getGlobalBounds()))
                ballVelocity.y = -ballVelocity.y;

            for (auto it = blocks.begin(); it != blocks.end();) {
                if (ball.getGlobalBounds().intersects(it->getGlobalBounds())) {
                    ballVelocity.y = -ballVelocity.y;
                    it = blocks.erase(it);
                } else {
                    ++it;
                }
            }

            if (ball.getPosition().y > 600) {
                gameStarted = false;
                ball.setPosition(390, 500);
                ballVelocity = sf::Vector2f(0.2f, -0.2f);
            }
        }

        window.clear(sf::Color::Black);
        window.draw(paddle);
        window.draw(ball);
        for (auto &block : blocks)
            window.draw(block);
        window.display();
    }

    return 0;
}