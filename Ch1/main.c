#include <stdio.h>

int main() { 
    char name[100]; //temp storage (buffer) to store the name

    printf("What's your name? "); 
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);
    return 0;
}