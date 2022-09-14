#include <SFML/Graphics/Text.hpp>
#include <string>
namespace pgui{
    class Text{
        public:
            Text(std::string textString){
                sf::Font font;
                font.loadFromFile("/home/julia/projects/GoldSourceRewritten/PlatinumSrc/pgui/res/tahoma.ttf");
                text.setString(textString);
                text.setFillColor(sf::Color::Red);
            }
        sf::Text text;
        sf::Font font;
    };



}