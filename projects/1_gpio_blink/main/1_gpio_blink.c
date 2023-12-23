/*
*   Project:    1_gpio_blink
*   Author:     Wessam Shoman
*   GitHub:     https://github.com/We55am/esp32-sam-projects.git
*   Copyright (c) 2023 Wessam Shoman
*   License: MIT (see LICENSE file for details)
*/

/* ******************** INCLUDE ********************* */
#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
/* ************************************************** */
bool gpio_state = false;


void app_main(void)
{
    gpio_reset_pin(CONFIG_APP_BLINK_GPIO);
    gpio_set_pull_mode(CONFIG_APP_BLINK_GPIO, GPIO_PULLDOWN_ONLY);
    gpio_set_direction(CONFIG_APP_BLINK_GPIO, GPIO_MODE_OUTPUT);

    while(1)
    {
        ESP_LOGI("App Task", "Setting GPIO %s", gpio_state == true ? "HIGH" : "LOW");
        gpio_set_level(CONFIG_APP_BLINK_GPIO, gpio_state);
        gpio_state = !gpio_state;
        vTaskDelay(pdMS_TO_TICKS(CONFIG_APP_BLINK_PERIOD));
    }
}
