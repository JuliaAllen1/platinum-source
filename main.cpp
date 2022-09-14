#include <iostream>
#include <stdio.h>
#include "pgui/cl_rootpanel.hpp"
#include "pgui/text.hpp"

int main(){
    pgui::cl_Root_Panel window(400, 400, "test");
    pgui::Text testText("test");
    window.window.draw(testText.text);
    
}
