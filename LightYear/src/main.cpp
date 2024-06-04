#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow renderWindow(sf::VideoMode(800, 800), "MyWindow");
    // The main loop - ends as soon as the window is closed
    while (renderWindow.isOpen())
    {
        // Event processing
        sf::Event event;
        while (renderWindow.pollEvent(event))
        {
            // Request for closing the renderWindow
            if (event.type == sf::Event::Closed)
                renderWindow.close();
        }

        // Clear the whole renderWindow before rendering a new frame
        renderWindow.clear();
        sf::Sprite sprite;
        sf::Text text;
        // Draw some graphical entities
        renderWindow.draw(sprite);
        renderWindow.draw(text);

        // End the current frame and display its contents on screen
        renderWindow.display();
    }
    std::cout << "Hello world!" << std::endl;
}