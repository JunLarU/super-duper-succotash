//Librerías necesarias para conectar a WiFi y hacer peticiones HTTP
#include <WiFi.h>
#include <HTTPClient.h>
#include <Arduino_JSON.h>

// Datos de la red WiFi
const char* ssid = "LAREST";
const char* password = "LEjtjc1949";

// Datos del servidor
const char* server = "http://192.168.68.63"; // e.g., "http://192.168.1.100"
const char* sendDataEndopoint = "/esp32.php?new=1";
const char* getDataEndpoint = "/esp32.php";