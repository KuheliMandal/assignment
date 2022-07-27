#include <stdio.h>
int main()
{
  float Pi=3.14, area , radius;
  printf("Enter radius of circle: ");
  scanf("%f",&radius);
  area= Pi * radius * radius;
  printf("Area of circle is: %f\n",area);

  return 0;
}