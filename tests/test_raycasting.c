#include <stdio.h>
#include <stdlib.h>

#include <assert.h>
#include <string.h>

void test_ray_create() {
    exit(EXIT_FAILURE);
}

void test_ray_free() {
    exit(EXIT_FAILURE);
}

void test_ray_get_distance() {
    exit(EXIT_FAILURE);
}

void test_ray_get_nth() {
    exit(EXIT_FAILURE);
}

void test_raycast_cast() {
    exit(EXIT_FAILURE);
}

void usage(char *exec) {
    printf("%s testname\n", exec);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        usage(argv[0]);
        exit(EXIT_FAILURE);
    }

    char *testname = argv[1];

    if (strcmp(testname, "ray_create") == 0) {
    } else if (strcmp(testname, "ray_free") == 0) {
    } else if (strcmp(testname, "ray_get_distance") == 0) {
    } else if (strcmp(testname, "ray_get_nth") == 0) {
    } else if (strcmp(testname, "raycast_cast") == 0) {
    } else {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
