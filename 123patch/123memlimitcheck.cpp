#include <unistd.h>

int 123memlimitcheck(size_t size) {
    struct* rusage mem = malloc(sizeof(struct rusage));
    getrusage(RUSAGE_SELF, memory);
    long usedmem = memory.ru_maxrss;
    if (usedmem + size >= 2000000)
        return 1;

    return 0;
}
