#include <SFML/Graphics/Text.hpp>
#include <string>
#include <iostream>
namespace pgui{
    class Text{
        public:
            Text(std::string textString){
                if (!this->font.loadFromFile("/home/julia/projects/GoldSourceRewritten/PlatinumSrc/pgui/res/tahoma.ttf")){
                    std::cerr << "Error: Font File Not Found.\n" ;
                }
                else {
                    std::cout << "Successfully loaded font!\n";
                }
                this->text.setString(textString);
                this->text.setFont(this->font);
                this->text.setFillColor(sf::Color::Red);
                this->text.setCharacterSize(30);
                this->text.setStyle(sf::Text::Regular);
            }
        sf::Text text;
        sf::Font font;
    };



}