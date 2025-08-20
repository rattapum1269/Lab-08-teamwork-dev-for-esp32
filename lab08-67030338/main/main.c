#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "sensor.h"
#include "led.h"
#include "display.h"

static const char *TAG = "LAB08";

void app_main(void)
{
    ESP_LOGI(TAG, "🚀 Lab 08: Managed Component from GitHub URL Demo Started");
    ESP_LOGI(TAG, "📥 Using Sensors component from: https://github.com/rattapum1269/Lab08-component-67030338.git");
    ESP_LOGI(TAG, "📥 Using LED component from: https://github.com/B2-BB22/Lab08-component-LED.git");
    ESP_LOGI(TAG, "📥 Using Display component from: https://github.com/Arthtitaya13032006/Lab-08-67030260.git");
    
    // เรียกใช้ฟังก์ชันจาก managed component (GitHub)
    sensor_init();
    led_init();
    display_init();
    
     display_show_message("System Starting...");
    
    // Start LED blinking in background
    led_start_blinking();
    
    int counter = 0;
    
    while (1) {
        ESP_LOGI(TAG, "=== Loop %d ===", counter++);
        
        // Clear display every loop
        display_clear_screen();
        
        // Read sensor data
        sensor_read_data();
        
        // Show data on display
        float temp = 25.5 + (float)(counter % 10);
        float humid = 60.0 + (float)(counter % 20);
        display_show_data(temp, humid);
        
        // Show LED status
        if (led_get_state()) {
            display_show_message("LED Status: ON");
        } else {
            display_show_message("LED Status: OFF");
        }
        
        // Check sensor status every 3 loops
        if (counter % 3 == 0) {
            sensor_check_status();
            display_show_message("Status Check Complete");
        }
        
        vTaskDelay(pdMS_TO_TICKS(2000)); // 2 seconds delay
    }
}