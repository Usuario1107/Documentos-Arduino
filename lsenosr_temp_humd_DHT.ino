// #include <Arduino.h>
#include <DHT.h>

#define PIN_DHT 2           
#define TIPO_DHT DHT11 
// #define TIPO_DHT DHT22   

float temperatura;
float humedad;

DHT sensor_dht(PIN_DHT, TIPO_DHT);

void leer_dht()
{ 
  if(sensor_dht.read())
  {
    temperatura = sensor_dht.readTemperature();
    humedad = sensor_dht.readHumidity();        

    if (isnan(humedad) || isnan(temperatura)) {
      Serial.println("Error de datos sensor dht");
    }
    else
    {
      Serial.println("Temperatura: "+ String(temperatura) + " °C "+"Humedad: "+ String(humedad)+ "%");
    }

  }else Serial.println("Error al leer sensor DHT");
  
}

void setup() {
  Serial.begin(9600);
  sensor_dht.begin();           
}

void loop() {
  delay(2000);              

  leer_dht();
}