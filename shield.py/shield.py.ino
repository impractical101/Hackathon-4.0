#include <SPI.h>
#include <Ethernet.h>

EthernetClient client;

byte MACaddress[] = {0xDE,0xAD,0xBE,0xEF,0xFE,0xED};
byte IPaddress[] = {10,0,0,178};
byte DNSserverIPaddress[] = {4,4,4,4};
byte gatewayIPaddress[] = { 10, 0, 0, 100 };
byte subnetMask[] = { 255, 255, 255, 0 };
char serverName[] = "log.server.com";


void setup() {
    Serial.begin(9600);
    Ethernet.begin(MACaddress, IPaddress, DNSserverIPaddress, gatewayIPaddress, subnetMask);
}


void loop()
{
    delay (5000);

    Serial.println("connecting to server...");
    client.connect(serverName, 80);
    Serial.println("making HTTP request...");
    client.println("GET /logger.php?sensor=temp&value=19 HTTP/1.1");
    client.println("HOST: log.server.com");
    client.println();
}
