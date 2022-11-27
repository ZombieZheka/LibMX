#include <stddef.h>

int mx_strcmp(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) {
        return 0;
	}

	while (*s1 != '\0') {
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
