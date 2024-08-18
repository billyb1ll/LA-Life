#include <stdio.h>

int main() {
  float charging_rate, battery, charging_speed, hour;
  scanf("%f %f", &battery, &charging_speed);
  hour = battery / charging_speed;

  if (hour <= 2) {
    charging_rate = hour * 4;
  } else {
    hour -= 2;
    charging_rate = 8 + (hour * 5);
  }
  printf("%.2f %.2f", charging_speed, charging_rate);
}