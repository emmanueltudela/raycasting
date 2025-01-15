#include <stdio.h>
#include <stdlib.h>

typedef struct ray {
    double distance;    // Distance of ray to obstacle
    double angle;       // Angle of casted ray
    int nth;            // Ray is nth in range (for raycast_cast_range)
} ray_t;

ray_t *ray_create() {
    return NULL;
}

void ray_free(ray_t *ray) {
    exit(EXIT_FAILURE);
}

double ray_get_distance(const ray_t *ray) {
    return 0.0;
}

int ray_get_nth(const ray_t *ray) {
    return 0;
}

ray_t *raycast_cast(const int **grid, double angle) {
    return NULL;
}

ray_t *raycast_cast_range(const int **grid, double starting_angle, double field_of_view, int number_of_rays) {
    return NULL;
}
