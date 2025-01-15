#ifndef __RAYCASTING_H__
#define __RAYCASTING_H__

typedef struct ray ray_t;

ray_t *ray_create();
void ray_free(ray_t *ray);

double ray_get_distance(const ray_t *ray);
int ray_get_nth(const ray_t *ray);

ray_t *raycast_cast(const int **grid, double angle);
ray_t *raycast_cast_range(const int **grid, double starting_angle, double field_of_view, int number_of_rays);

#endif
