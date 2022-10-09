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
            while(window.isOpen()){
                pollForClose();
            }
            
        }
        sf::RenderWindow window;
        void pollForClose(){
                sf::Event event;
                while (window.pollEvent(event)){ 
                    // close when event is a request to close
                    if (event.type == sf::Event::Closed)
                        window.close();

            }
        };

};}
#endif
