#include <stdio.h>

#include "pico/stdio.h"

int main(void) {
    stdio_init_all();
    
    while (true) {
        printf("Hello world.");
        sleep_ms(1000);
    }
}