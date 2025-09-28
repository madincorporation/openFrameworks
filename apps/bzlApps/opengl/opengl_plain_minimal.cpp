#include <OpenGL/OpenGL.h>
#include <iostream>

int main() {
    CGLContextObj ctx = CGLGetCurrentContext();
    if (ctx) {
        std::cout << "OpenGL context acquired successfully!\n";
    } else {
        std::cout << "No OpenGL context available.\n";
    }
    return 0;
}
