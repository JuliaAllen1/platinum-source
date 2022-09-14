#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window.hpp>
#include "../math/math.h"
#include "panel.hpp"
#include <string>
#ifndef CL_ROOTPANEL_HPP
#define CL_ROOTPANEL_HPP
namespace pgui
{
    class cl_Root_Panel : Panel{
    public:
        cl_Root_Panel(int viewport_size_x, int viewport_size_y, std::string title)
        {
            window.create(sf::VideoMode(viewport_size_x, viewport_size_y), title);
            window.display();
            pollForClose();
        }
        sf::RenderWindow window;
        void pollForClose(){
            while (window.isOpen())
            {
                // check all the window's events that were triggered since the last iteration of the loop
                sf::Event event;
                while (window.pollEvent(event))
                {
                    // "close requested" event: we close the window
                    if (event.type == sf::Event::Closed)
                        window.close();}}}
    };

}
#endif