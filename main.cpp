#include <iostream>
#include <stdio.h>
#include "pgui/cl_rootpanel.hpp"
#include "pgui/text.hpp"
#include <thread>


int main(){
    pgui::cl_Root_Panel window(400, 400, "test");
    pgui::cl_Root_Panel window2(500, 500, "window2");
    pgui::Text testText("test");
}
