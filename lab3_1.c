#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    while ((opt = getopt(argc, argv, "hn:")) != -1) {
        switch (opt) {
            case 'h':
                printf("Справка: используйте -n <имя> для указания имени.\n");
                break;
            case 'n':
                printf("Привет, %s!\n", optarg);
                break;
            default:
                printf("Неизвестный ключ: -%c\n", optopt);
        }
    }
    return 0;
}