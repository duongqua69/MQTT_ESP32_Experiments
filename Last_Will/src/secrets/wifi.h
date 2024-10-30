namespace WiFiSecrets
{
    const char *ssid = "Duong";
    const char *pass = "12345678";
    const char *echo_topic = "esp32/echo_test";
    unsigned int publish_count = 0;
    uint16_t keepAlive = 15;    // seconds (default is 15)
    uint16_t socketTimeout = 5; // seconds (default is 15)
}