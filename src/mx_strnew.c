#include <stdlib.h>

char* mx_strnew(int size) {
    return (size < 0) ? NULL : malloc(size + 1);
}
