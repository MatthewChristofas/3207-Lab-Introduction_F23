#include <stdlib.h>

char randchar(){

    char letter = rand() % 26 + 'a';

    return letter;
}
