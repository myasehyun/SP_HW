#include <stdlib.h>

int main() {
    system("echo 'file1 file2' | xargs rm -f");
    return 0;
}