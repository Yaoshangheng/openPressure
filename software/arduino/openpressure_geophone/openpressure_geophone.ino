 /* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * + Pin number +  ZERO Board pin  |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Digital Low      |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 0          | 0 -> RX          |  PA11  |                 | EIC/EXTINT[11] ADC/AIN[19]           PTC/X[3] *SERCOM0/PAD[3]  SERCOM2/PAD[3]  TCC0/WO[3]  TCC1/WO[1]
 * | 1          | 1 <- TX          |  PA10  |                 | EIC/EXTINT[10] ADC/AIN[18]           PTC/X[2] *SERCOM0/PAD[2]                  TCC0/WO[2]  TCC1/WO[0]
 * | 2          | 2                |  PA14  |                 | EIC/EXTINT[14]                                 SERCOM2/PAD[2]  SERCOM4/PAD[2]  TC3/WO[0]   TCC0/WO[4]
 * | 3          | ~3               |  PA09  |                 | EIC/EXTINT[9]  ADC/AIN[17]           PTC/X[1]  SERCOM0/PAD[1]  SERCOM2/PAD[1] *TCC0/WO[1]  TCC1/WO[3]
 * | 4          | ~4               |  PA08  |                 | EIC/NMI        ADC/AIN[16]           PTC/X[0]  SERCOM0/PAD[0]  SERCOM2/PAD[0] *TCC0/WO[0]  TCC1/WO[2]
 * | 5          | ~5               |  PA15  |                 | EIC/EXTINT[15]                                 SERCOM2/PAD[3]  SERCOM4/PAD[3] *TC3/WO[1]   TCC0/WO[5]
 * | 6          | ~6               |  PA20  |                 | EIC/EXTINT[4]                        PTC/X[8]  SERCOM5/PAD[2]  SERCOM3/PAD[2]             *TCC0/WO[6]
 * | 7          | 7                |  PA21  |                 | EIC/EXTINT[5]                        PTC/X[9]  SERCOM5/PAD[3]  SERCOM3/PAD[3]              TCC0/WO[7]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Digital High     |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 8          | ~8               |  PA06  |                 | EIC/EXTINT[6]  ADC/AIN[6]  AC/AIN[2] PTC/Y[4]  SERCOM0/PAD[2]                 *TCC1/WO[0]
 * | 9          | ~9               |  PA07  |                 | EIC/EXTINT[7]  ADC/AIN[7]  AC/AIN[3] PTC/Y[5]  SERCOM0/PAD[3]                 *TCC1/WO[1]
 * | 10         | ~10              |  PA18  |                 | EIC/EXTINT[2]                        PTC/X[6] +SERCOM1/PAD[2]  SERCOM3/PAD[2] *TC3/WO[0]    TCC0/WO[2]
 * | 11         | ~11              |  PA16  |                 | EIC/EXTINT[0]                        PTC/X[4] +SERCOM1/PAD[0]  SERCOM3/PAD[0] *TCC2/WO[0]   TCC0/WO[6]
 * | 12         | ~12              |  PA19  |                 | EIC/EXTINT[3]                        PTC/X[7] +SERCOM1/PAD[3]  SERCOM3/PAD[3]  TC3/WO[1]   *TCC0/WO[3]
 * | 13         | ~13              |  PA17  | LED             | EIC/EXTINT[1]                        PTC/X[5] +SERCOM1/PAD[1]  SERCOM3/PAD[1] *TCC2/WO[1]   TCC0/WO[7]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Analog Connector |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 14         | A0               |  PA02  | A0              | EIC/EXTINT[2] *ADC/AIN[0]  DAC/VOUT  PTC/Y[0]
 * | 15         | A1               |  PB08  | A1              | EIC/EXTINT[8] *ADC/AIN[2]            PTC/Y[14] SERCOM4/PAD[0]                  TC4/WO[0]
 * | 16         | A2               |  PB09  | A2              | EIC/EXTINT[9] *ADC/AIN[3]            PTC/Y[15] SERCOM4/PAD[1]                  TC4/WO[1]
 * | 17         | A3               |  PA04  | A3              | EIC/EXTINT[4] *ADC/AIN[4]  AC/AIN[0] PTC/Y[2]  SERCOM0/PAD[0]                  TCC0/WO[0]
 * | 18         | A4               |  PA05  | A4              | EIC/EXTINT[5] *ADC/AIN[5]  AC/AIN[1] PTC/Y[5]  SERCOM0/PAD[1]                  TCC0/WO[1]
 * | 19         | A5               |  PB02  | A5              | EIC/EXTINT[2] *ADC/AIN[10]           PTC/Y[8]  SERCOM5/PAD[0]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Wire             |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 20         | SDA              |  PA22  | SDA             | EIC/EXTINT[6]                        PTC/X[10] *SERCOM3/PAD[0] SERCOM5/PAD[0] TC4/WO[0] TCC0/WO[4]
 * | 21         | SCL              |  PA23  | SCL             | EIC/EXTINT[7]                        PTC/X[11] *SERCOM3/PAD[1] SERCOM5/PAD[1] TC4/WO[1] TCC0/WO[5]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            |SPI (Legacy ICSP) |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 22         | 1                |  PA12  | MISO            | EIC/EXTINT[12] SERCOM2/PAD[0] *SERCOM4/PAD[0] TCC2/WO[0] TCC0/WO[6]
 * |            | 2                |        | 5V0             |
 * | 23         | 4                |  PB10  | MOSI            | EIC/EXTINT[10]                *SERCOM4/PAD[2] TC5/WO[0]  TCC0/WO[4]
 * | 24         | 3                |  PB11  | SCK             | EIC/EXTINT[11]                *SERCOM4/PAD[3] TC5/WO[1]  TCC0/WO[5]
 * |            | 5                |        | RESET           |
 * |            | 6                |        | GND             |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | LEDs             |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 25         |                  |  PB03  | RX              |
 * | 26         |                  |  PA27  | TX              |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | USB              |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 27         |                  |  PA28  | USB_HOST_ENABLE | EIC/EXTINT[8]
 * | 28         |                  |  PA24  | USB_NEGATIVE    | *USB/DM
 * | 29         |                  |  PA25  | USB_POSITIVE    | *USB/DP
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | EDBG             |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 30         |                  |  PB22  | EDBG_UART TX    | *SERCOM5/PAD[2]
 * | 31         |                  |  PB23  | EDBG_UART RX    | *SERCOM5/PAD[3]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 32         |                  |  PA22  | EDBG_SDA        | Pin 20 (SDA)
 * | 33         |                  |  PA23  | EDBG_SCL        | Pin 21 (SCL)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 34         |                  |  PA19  | EDBG_MISO       | EIC/EXTINT[3] *SERCOM1/PAD[3] SERCOM3/PAD[3] TC3/WO[1]  TCC0/WO[3]
 * | 35         |                  |  PA16  | EDBG_MOSI       | EIC/EXTINT[0] *SERCOM1/PAD[0] SERCOM3/PAD[0] TCC2/WO[0] TCC0/WO[6]
 * | 36         |                  |  PA18  | EDBG_SS         | EIC/EXTINT[2] *SERCOM1/PAD[2] SERCOM3/PAD[2] TC3/WO[0]  TCC0/WO[2]
 * | 37         |                  |  PA17  | EDBG_SCK        | EIC/EXTINT[1] *SERCOM1/PAD[1] SERCOM3/PAD[1] TCC2/WO[1] TCC0/WO[7]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 38         | ATN              |  PA13  | EDBG_GPIO0      | EIC/EXTINT[13] SERCOM2/PAD[1] SERCOM4/PAD[1] *TCC2/WO[1] TCC0/WO[7]
 * | 39         |                  |  PA21  | EDBG_GPIO1      | Pin 7
 * | 40         |                  |  PA06  | EDBG_GPIO2      | Pin 8
 * | 41         |                  |  PA07  | EDBG_GPIO3      | Pin 9
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            |                  |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | GND              |        |                 |
 * | 42         | AREF             |  PA03  |                 | EIC/EXTINT[3] *[ADC|DAC]/VREFA ADC/AIN[1] PTC/Y[1]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            |32.768KHz Crystal |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            |                  |  PA00  | XIN32           | EIC/EXTINT[0] SERCOM1/PAD[0] TCC2/WO[0]
 * |            |                  |  PA01  | XOUT32          | EIC/EXTINT[1] SERCOM1/PAD[1] TCC2/WO[1]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */

#include <SPI.h>
#include "wiring_private.h" // pinPeripheral() function

//SPI class(MISO
SPIClass mySPI (&sercom0, 17, 9 , 8, SPI_PAD_2_SCK_3, SERCOM_RX_PAD_0);    // ads1220 17 -->PA4 9-->  8-->

//Uart class
Uart BluetoothSerial( &sercom5, 31, 30, SERCOM_RX_PAD_3, UART_TX_PAD_2) ;  //bluetooth

//Pin definition
#define CHECK_PIN 0
#define ADS1220_CS_PIN SS
#define ADS1220_DRDY_PIN A4
#define DC_DC_ENABLE A5
#define BLUETOOTH_RESET 27
#define PIN_DRDY  A4

#define SPI_MASTER_DUMMY   0xFF
#define RESET 0x06                                                    //Send the RESET command (06h) to make sure the ADS1220 is properly reset after power-up
#define START 0x08                                         //Send the START/SYNC command (08h) to start converting in continuous conversion mode
#define WREG  0x40
#define RREG  0x20
#define STOP   0x02
#define CONFIG_REG0_ADDRESS 0x00
#define CONFIG_REG1_ADDRESS 0x01
#define CONFIG_REG2_ADDRESS 0x02
#define CONFIG_REG3_ADDRESS 0x03


#define REG_CONFIG_DR_20SPS 0x00
#define REG_CONFIG_DR_45SPS 0x20
#define REG_CONFIG_DR_90SPS 0x40
#define REG_CONFIG_DR_175SPS 0x60
#define REG_CONFIG_DR_330SPS 0x80
#define REG_CONFIG_DR_600SPS 0xA0
#define REG_CONFIG_DR_1000SPS 0xC0
#define REG_CONFIG_DR_MASK 0xE0

#define DR_20SPS 20
#define DR_45SPS 45
#define DR_90SPS 90
#define DR_175SPS 175
#define DR_330SPS 330
#define DR_600SPS 600
#define DR_1000SPS 1000

#define REG_CONFIG_PGA_GAIN_1 0x00
#define REG_CONFIG_PGA_GAIN_2 0x02
#define REG_CONFIG_PGA_GAIN_4 0x04
#define REG_CONFIG_PGA_GAIN_8 0x06
#define REG_CONFIG_PGA_GAIN_16 0x08
#define REG_CONFIG_PGA_GAIN_32 0x0A
#define REG_CONFIG_PGA_GAIN_64 0x0C
#define REG_CONFIG_PGA_GAIN_128 0x0E
#define REG_CONFIG_PGA_GAIN_MASK 0x0E

#define PGA_GAIN_1 1
#define PGA_GAIN_2 2
#define PGA_GAIN_4 4
#define PGA_GAIN_8 8
#define PGA_GAIN_16 16
#define PGA_GAIN_32 32
#define PGA_GAIN_64 64
#define PGA_GAIN_128 128

uint8_t Config_Reg0;
uint8_t Config_Reg1;
uint8_t Config_Reg2;
uint8_t Config_Reg3;
int8_t NewDataAvailable;

#define PGA 1
#define VREF 2.048
#define VFSR VREF/PGA
#define FSR (((long int)1<<23)-1)

volatile byte MSB;
volatile byte data;
volatile byte LSB;
volatile long count=0;

volatile byte *SPI_RX_Buff_Ptr;

volatile char DataPacketHeader[16];


void setup() {
  SerialUSB.begin(9600);
  BluetoothSerial.begin(115200);
  
  // do this first, for Reasons
  mySPI.begin();
  pinMode(SS, OUTPUT);
  pinMode(ADS1220_DRDY_PIN,INPUT);
  pinMode(DC_DC_ENABLE , OUTPUT);
  pinMode(BLUETOOTH_RESET,OUTPUT);

  pinMode(PIN_DRDY, INPUT);
  pinMode(PIN_DRDY, INPUT_PULLUP);
  attachInterrupt(PIN_DRDY, onA4Change, FALLING);
  
  digitalWrite(DC_DC_ENABLE, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(BLUETOOTH_RESET, HIGH);
  //pinMode(CHECK_PIN,OUTPUT);
   
   pinPeripheral(17, PIO_SERCOM_ALT);
   pinPeripheral(9, PIO_SERCOM_ALT);
   pinPeripheral(8, PIO_SERCOM_ALT);
  
   mySPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE1));
   ads1220begin();
}


void onA4Change() {
 //SerialUSB.println("A4 change");
    NewDataAvailable = true;
    count++;
}


uint8_t i = 0;
void loop() {

  long int bit32;
  long int bit24;
  byte *config_reg;

  if(!(millis()%1000))
  {
     //SerialUSB.println(count); // print to check
    count = 0;
  }

  
  if(NewDataAvailable == true)
  {
   
      SPI_RX_Buff_Ptr = Read_Data();
     
      MSB = SPI_RX_Buff_Ptr[0];    
      data = SPI_RX_Buff_Ptr[1];
      LSB = SPI_RX_Buff_Ptr[2];
    
      bit24 = MSB;
      bit24 = (bit24 << 8) | data;
      bit24 = (bit24 << 8) | LSB;                                 // Converting 3 bytes to a 24 bit int
        
      bit24= ( bit24 << 8 );
      bit32 = ( bit24 >> 8 );                      // Converting 24 bit two's complement to 32 bit two's complement
      
      float Vout = (float)((bit32*VFSR*100000)/FSR);     //In  mV
      SerialUSB.println(Vout);
   
      DataPacketHeader[0] = 0x0A;  // Packet Header
      DataPacketHeader[1] = 0xFA;  // Packet Header
      DataPacketHeader[2] = 0x04;  // Data Length LSB in Bytes
      DataPacketHeader[3] = 0;     // Data Length MSB in Bytes
      DataPacketHeader[4] = 0x02;  // Packet type 0x01->command , 0x02->data
    
    
      DataPacketHeader[5] = (int)Vout;       // data LSB
      DataPacketHeader[6] = (int)Vout >> 8;  //
      DataPacketHeader[7] = (int)Vout >> 16;
      DataPacketHeader[8] = (int)Vout >> 24; //Data MSB
    
      DataPacketHeader[9] = 0x00;
      DataPacketHeader[10] = 0x0B;      // Packet footer
    
      for (i = 0; i < 11; i++)
      {
     //   SerialUSB.write(DataPacketHeader[i]); // transmit through uart line
         BluetoothSerial.write(DataPacketHeader[i]);
      }
            NewDataAvailable = false;
     
  }

}


void ads1220begin()
{
  
  SPI_Reset();                                            
  delay(100);                                                    

  digitalWrite(ADS1220_CS_PIN,LOW);

  Config_Reg0 = 0x01;  // AN1-AN0, gain=1,PGA enabled
  Config_Reg1 = 0x44;   //0x00-sinlge , 0x04-cont
  Config_Reg2 = 0x10;  //10 //55
  Config_Reg3 = 0x00;
  

  writeRegister( CONFIG_REG0_ADDRESS , Config_Reg0);
  writeRegister( CONFIG_REG1_ADDRESS , Config_Reg1);
  writeRegister( CONFIG_REG2_ADDRESS , Config_Reg2);
  writeRegister( CONFIG_REG3_ADDRESS , Config_Reg3);
  
  delay(100);
 
  Config_Reg0 = readRegister(CONFIG_REG0_ADDRESS);
  Config_Reg1 = readRegister(CONFIG_REG1_ADDRESS);
  Config_Reg2 = readRegister(CONFIG_REG2_ADDRESS);
  Config_Reg3 = readRegister(CONFIG_REG3_ADDRESS);

  SerialUSB.println("Config_Reg : ");
  SerialUSB.println(Config_Reg0,HEX);
  SerialUSB.println(Config_Reg1,HEX);
  SerialUSB.println(Config_Reg2,HEX);
  SerialUSB.println(Config_Reg3,HEX);
  SerialUSB.println(" ");
  digitalWrite(ADS1220_CS_PIN,HIGH); //release chip, signal end transfer

  SPI_Start();
  delay(10);
}




void writeRegister(uint8_t address, uint8_t value)
{
  digitalWrite(ADS1220_CS_PIN,LOW);
  delay(5);
  mySPI.transfer(WREG|(address<<2));        
  mySPI.transfer(value); 
  delay(5);
  digitalWrite(ADS1220_CS_PIN,HIGH);
}  


uint8_t readRegister(uint8_t address)
{
  uint8_t data;

  digitalWrite(ADS1220_CS_PIN,LOW);
  delay(5);
  mySPI.transfer(RREG|(address<<2));        
  data = mySPI.transfer(SPI_MASTER_DUMMY); 
  delay(5);
  digitalWrite(ADS1220_CS_PIN,HIGH);

  return data;
}  

uint8_t * Read_Data()
{
  static byte SPI_Buff[3];

 // if((digitalRead(ADS1220_DRDY_PIN)) == LOW)             //        Wait for DRDY to transition low
  {
    digitalWrite(ADS1220_CS_PIN,LOW);                         //Take CS low
  //  delayMicroseconds(10);
    for (int i = 0; i < 3; i++)
    { 
      SPI_Buff[i] = mySPI.transfer(SPI_MASTER_DUMMY);
    }
  //  delayMicroseconds(10);
    digitalWrite(ADS1220_CS_PIN,HIGH);                  //  Clear CS to high
   
  }
    
  return SPI_Buff;
}

void SPI_Reset()
{
  SPI_Command(RESET);                              
}

void SPI_Start()
{
  SPI_Command(START);
}

void SPI_Stop()
{
  SPI_Command(STOP);
}

void SPI_Command(unsigned char data_in)
{
  digitalWrite(ADS1220_CS_PIN, LOW);
  delay(2);
  digitalWrite(ADS1220_CS_PIN, HIGH);
  delay(2);
  digitalWrite(ADS1220_CS_PIN, LOW);
  delay(2);
  mySPI.transfer(data_in);
  delay(2);
  digitalWrite(ADS1220_CS_PIN, HIGH);
}


