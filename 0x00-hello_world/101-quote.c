#include <unistd.h>
#include <string.h>
#include <sys/syscall.h>

int main() {
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    syscall(SYS_write, STDERR_FILENO, message, strlen(message));
    return 1;
}

