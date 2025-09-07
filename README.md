# Sensor DHT11 / DHT22 – Lectura de Temperatura y Humedad

Este código utiliza la librería **DHT sensor library** para leer datos de temperatura y humedad desde sensores DHT11 o DHT22.

## 📦 Librería utilizada

- **Nombre:** DHT sensor library  
- **Autor:** Adafruit  
- **Repositorio oficial:** [https://github.com/adafruit/DHT-sensor-library](https://www.arduinolibraries.info/libraries/dht-sensor-library)

## ⚙️ Métodos principales del objeto `DHT`

| Método                  | Descripción                                                                 |
|-------------------------|------------------------------------------------------------------------------|
| `begin()`               | Inicializa el sensor. Se llama en `setup()`.                                |
| `read(force = false)`   | Realiza una lectura del sensor. Si `force = true`, fuerza la lectura.       |
| `readTemperature()`     | Devuelve la temperatura en °C o °F.                                         |
| `readHumidity()`        | Devuelve la humedad relativa en %.                                          |
| `computeHeatIndex()`    | Calcula el índice de calor según temperatura y humedad.                     |
| `convertCtoF()`         | Convierte grados Celsius a Fahrenheit.                                      |
| `convertFtoC()`         | Convierte grados Fahrenheit a Celsius.                                      |

## 🧪 Notas

- Se recomienda validar los datos con `isnan()` para evitar lecturas corruptas.
- Compatible con sensores DHT11 y DHT22 (definidos por macro `TIPO_DHT`).

---