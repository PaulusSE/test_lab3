#include <stdio.h>
#include <getopt.h>

int main(int argc, char *argv[]) {
    int opt;
    struct option long_options[] = {
        {"help", no_argument, 0, 'h'},
        {"name", required_argument, 0, 'n'},
        {0, 0, 0, 0} // Завершающий элемент
    };

    while ((opt = getopt_long(argc, argv, "hn:", long_options, NULL)) != -1) {
        switch (opt) {
            case 'h':
                printf("Справка: используйте --name <имя> для указания имени.\n");
                break;
            case 'n':
                printf("Привет, %s!\n", optarg);
                break;
            default:
                printf("Неизвестный ключ.\n");
        }
    }
    return 0;
}
