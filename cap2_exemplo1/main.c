// acender led com botao - feito em wokwi.com
#include "pico/stdlib.h"

#define LED_PIN 11
#define BTN_PIN 5

int main() {
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);
  //stdio_init_all();

  gpio_init(BTN_PIN);
  gpio_set_dir(BTN_PIN, GPIO_IN);
  //gpio_pull_up(BTN_PIN);
  //stdio_init_all();

  while(1)
  {
    while(gpio_get(BTN_PIN)) {
      gpio_put(LED_PIN, 0);
    }
    gpio_put(LED_PIN, 1);
  }
}
