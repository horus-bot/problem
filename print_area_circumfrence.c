#include <stdio.h>

int main() {
   float area,circum,radius;
   printf("enter the radius of the circle ");
   scanf("%f",&radius);
   area=3.14*radius*radius;
   circum=2*3.14*radius;
   printf("area of the circle %f \n:",area);
   printf("circum of the circle %f \n:",circum);
}
