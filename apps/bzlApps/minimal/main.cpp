#include <iostream>
#include "ofMain.h"

int main(){
    std::cout << "\n  => Hello " << ofDummy << " "
    << OF_VERSION_MAJOR << "." << OF_VERSION_MINOR << "." << OF_VERSION_PATCH
    << "!\n" << std::endl;
    return 0;
}
