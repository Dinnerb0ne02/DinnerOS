#include <dinner\tty\tty.h>

void _kernel_init() {
    //to do
}

void _kernel_main(void* info_table) {
    //to do
    tty_set_theme(VGA_COLOR_GREEN,VGA_COLOR_BLACK);
    tty_put_str("Hello, Kernel!\n"); 
}

// int main(){};