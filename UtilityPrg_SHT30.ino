#include <Wire.h>
#include <WEMOS_SHT3X.h>

SHT3X sht30(0x45); // Standard I2C Adresse für SHT30 ist 0x44

void setup() 
{
  Serial.begin(9600);
  Serial.println("SHT30 test");
}

void loop() 
{
  if (sht30.get() == 0) 
  {
    Serial.print("Temperature in Celsius: ");
    Serial.print(sht30.cTemp);
    Serial.println(" C");

    Serial.print("Humidity: ");
    Serial.print(sht30.humidity);
    Serial.println(" %");

    Serial.println();
  } 
  else 
  {
    Serial.println("Failed to read from SHT30 sensor");
  }

  delay(2000);
}
