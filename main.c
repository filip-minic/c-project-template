#include <stdlib.h>

#ifdef __unix__

#elif defined(_WIN32)

#endif

#ifdef __unix__
int main(int argc, char *argv[]) {
#elif defined(_WIN32)
int __cdecl main(int argc, char **argv) {
#endif

    return EXIT_SUCCESS;
}