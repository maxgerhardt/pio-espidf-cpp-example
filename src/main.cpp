#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "FancyBlinker.h"

/* create C++ object */
#define BLINKY_GPIO 2
FancyBlinker blinker(BLINKY_GPIO);

/* the app_main entry point **must** have C linkage. Thus extern "C". */
extern "C" void app_main()
{
    printf("Entry point\n");
    blinker.Setup();
    while(1) {
        blinker.BlinkyBlinky();
        printf("Blinky\n");
    }
}
