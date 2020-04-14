#include<math.h>
#include "point.h"

double get_distance_between(Point pointA, Point pointB){
  double dx = pointA.x - pointB.x;
  double dy = pointA.y - pointB.y;
  return sqrt(pow(dx, 2) + pow(dy, 2));
};

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location){
  double distance_of_closest_food = get_distance_between(current_location,food_points[0]);
  int closest_food_index = 0;
  for(int i = 1; i < NUM_OF_FOOD_TARGETS; i++){
    double current_food_distance = get_distance_between(current_location, food_points[i]);
    if(current_food_distance < distance_of_closest_food){
      closest_food_index = i;
      distance_of_closest_food = current_food_distance;
    };
  };
  *closest_food_location = food_points[closest_food_index];
};

