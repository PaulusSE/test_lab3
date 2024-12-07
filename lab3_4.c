#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            printf("Help: Use -f <file>, -o <output>, -v for verbose\n");
        } else if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
            printf("Input file: %s\n", argv[++i]);
        } else if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
            printf("Output file: %s\n", argv[++i]);
        } else if (strcmp(argv[i], "-v") == 0) {
            printf("Verbose mode enabled\n");
        } else if (strcmp(argv[i], "-g") == 0) {
            printf("Option g activated\n");
        } else {
            printf("Unknown option: %s\n", argv[i]);
        }
    }
    return 0;
}
