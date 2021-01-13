#include "FancyBlinker.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"
#include "driver/gpio.h"

FancyBlinker::FancyBlinker(int pin) {
    m_pin = pin;
}

void FancyBlinker::Setup() {
    /* Set the GPIO as a push/pull output */
    gpio_pad_select_gpio(m_pin);
    gpio_set_direction((gpio_num_t) m_pin, GPIO_MODE_OUTPUT);
}

void FancyBlinker::BlinkyBlinky() {
    gpio_set_level((gpio_num_t) m_pin, 0);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    gpio_set_level((gpio_num_t) m_pin, 1);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}