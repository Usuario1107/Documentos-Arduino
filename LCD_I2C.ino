
#include <Wire.h>              // Librería para comunicación I2C (necesaria para el LCD)
#include <LiquidCrystal_I2C.h> // Librería específica para pantallas LCD con módulo I2C

// Crea un objeto LCD con dirección I2C 0x27, 16 columnas y 2 filas
LiquidCrystal_I2C mi_lcd(0x27, 16, 2);

void setup()
{
  mi_lcd.init();        // Inicializa la pantalla LCD
  mi_lcd.backlight();   // Activa la retroiluminación del LCD
  mi_lcd.clear();       // Limpia cualquier texto previo en pantalla

  mi_lcd.setCursor(0, 0);     // Posiciona el cursor en la columna 0, fila 0
  mi_lcd.print("Inicando");   // Muestra el texto "Inicando" en la pantalla
  delay(100);                 // Pequeña pausa para dar tiempo a visualizar el mensaje
}

void loop()
{
  // Bucle que mueve el texto "HELLO WORLD" de izquierda a derecha
  for (int i = 0; i < 17; i++)
  {
    mi_lcd.clear();           // Limpia la pantalla antes de cada nueva posición
    mi_lcd.setCursor(i, 0);   // Posiciona el cursor en la columna 'i', fila 0
    mi_lcd.print("HELLO WORLD"); // Muestra el texto en la posición actual
    delay(500);               // Espera medio segundo antes de mover el texto
  }

  delay(1000); // Pausa de 1 segundo antes de repetir el desplazamiento
}