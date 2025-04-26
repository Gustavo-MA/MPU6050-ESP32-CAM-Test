#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu6050;

void setup() {
  Serial.begin(115200);
  Wire.begin(12, 14); // SDA y SCL para ESP32
  mpu6050.initialize();
  
}


void loop() {
  int16_t ax, ay, az, gx, gy, gz;
  mpu6050.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  Serial.print("Aceleración X: ");
  Serial.print(ax);
  Serial.print(" | Aceleración Y: ");
  Serial.print(ay);
  Serial.print(" | Aceleración Z: ");
  Serial.print(az);
  Serial.print(" | Giro X: ");
  Serial.print(gx);
  Serial.print(" | Giro Y: ");
  Serial.print(gy);
  Serial.print(" | Giro Z: ");
  Serial.println(gz);

  delay(100);
}
