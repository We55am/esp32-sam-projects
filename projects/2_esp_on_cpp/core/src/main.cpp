/*
*   Project:    esp_on_cpp
*   Author:     Wessam Shoman
*   GitHub:     https://github.com/We55am/esp32-sam-projects.git
*   Copyright (c) 2023 Wessam Shoman
*   License: MIT (see LICENSE file for details)
*   Reference: https://www.youtube.com/watch?v=aczocIwZfZ4&list=PLowIV8ZSSsAWjoPJomVi_s1ZMghc9gNn9
*/

/* ******************** INCLUDE ********************* */
#include "main.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#include "esp_log.h"
/* ************************************************** */
#define LOG_TAG     "MAIN"

extern "C" void app_main( void )
{
    ESP_LOGI(LOG_TAG, "Hello World!");
    while(1)
    {
        vTaskDelay(pdMS_TO_TICKS(1000));
        ESP_LOGI(LOG_TAG, "Hello World!");
    }
}