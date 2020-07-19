/*
 * Exemplo web server com esp8266 nodemcu
 * 
 */
#include<ESP8266WiFi.h>
const char* ssid = "TP-LINK_73C0";
const char* senha = "109821033523";


void setup() {
  Serial.begin(115200);
  delay(10);

  //iniciando aconexão WiFi

  Serial.println("Conectando rede Wifi");
  Serial.println(ssid);
  
  WiFi.begin(ssid,senha);
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println("Endereço IP: ");
  Serial.println(WiFi.localIP());
}

void loop() 
{
  

}
