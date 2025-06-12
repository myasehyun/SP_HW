#include <stdlib.h>

int main() {
    system("ps -eo pid,comm,%cpu,%mem --sort=-%cpu | head -n 6");
    return 0;
}