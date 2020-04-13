#include<stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[NUM_OF_FOOD_TARGETS] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  Point organism_location = {97, 27};
  Point closest_food_location;
  get_closest_food(food_points, NUM_OF_FOOD_TARGETS, organism_location, &closest_food_location);
  printf("Location of organism: [%d %d],  ",organism_location.x, organism_location.y);
  printf("Closest food target: [%d %d]", closest_food_location.x, closest_food_location.y);
  return 0;
};
