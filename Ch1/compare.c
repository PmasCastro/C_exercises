#include <stdio.h>
#include <string.h>

int main() { 
    int x, y;

    printf("What's x? "); 
    scanf("%d", &x); //expects integers and stores the resul in the variable x
    printf("What's y? ");
    scanf("%d", &y);

    if(x > y) {
        printf("x is greater than y"); 
    }
    else if (x < y) {
        printf("x is less than y"); 
    }
    else{
        printf("x and y are the same value");
    }
}