#define STRINGIFY(x) #x
#define SHOW_DEFINE(x) printf(#x " = %s\n", STRINGIFY(x))

#include "ofMain.h"
#include <stdio.h>

int main() {
#ifdef TARGET_OS_OSX
    printf("TARGET_OS_OSX defined\n");
#else
    printf("TARGET_OS_OSX NOT defined\n");
#endif

#ifdef __APPLE__
    printf("__APPLE__ defined\n");
#endif

#ifdef __linux__
    printf("__linux__ defined\n");
#endif

    return 0;
}