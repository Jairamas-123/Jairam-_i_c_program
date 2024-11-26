#include <stdio.h>

int main(void) {
  float p, r, t, si;
  printf("Enter principal,rate and time\n");
  scanf("%f%f%f", &p, &r, &t);
  si = (p * r * t) / 100;
  printf("The simple interest is %f\n",si);
  printf("kallesh vardi\n");

  return 0;
}