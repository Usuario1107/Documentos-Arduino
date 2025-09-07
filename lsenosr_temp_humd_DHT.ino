#include <DHT.h>  // Incluye la librería para manejar sensores DHT (DHT11, DHT22, etc.)

#define PIN_DHT 2         // Define el pin digital al que está conectado el sensor DHT
#define TIPO_DHT DHT11    // Define el tipo de sensor (puede ser DHT11 o DHT22)

DHT dht(PIN_DHT, TIPO_DHT); // Crea un objeto 'dht' con el pin y tipo definidos

void setup() {
  Serial.begin(9600);        // Inicializa la comunicación serial a 9600 baudios
  dht.begin();               // Inicializa el sensor DHT para comenzar a leer datos
  Serial.println("Sensor DHT iniciado"); // Mensaje de confirmación en el monitor serial
}

void loop() {
  float temperatura = dht.readTemperature(); // Lee la temperatura en grados Celsius
  float humedad = dht.readHumidity();        // Lee la humedad relativa en porcentaje

  // Verifica si las lecturas son válidas (no son NaN)
  if (isnan(temperatura) || isnan(humedad)) {
    Serial.println("Error al leer el sensor DHT"); // Mensaje de error si falla la lectura
  } else {
    // Muestra los valores de temperatura y humedad en el monitor serial
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print(" °C  Humedad: ");
    Serial.print(humedad);
    Serial.println(" %");
  }

  delay(2000); // Espera 2 segundos antes de realizar una nueva lectura
}