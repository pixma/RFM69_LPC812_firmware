#ifndef CONFIG_H_
#define CONFIG_H_

#define VERSION "WRSC_RFM69_Controller 0.1.5"

// Version of MCU used (LPC812, LPC810 supported)
#define LPC810
//#define LPC812

//
// Optional Features
//

// Remote register read/write
#define FEATURE_REMOTE_REG_RW

// Remote packet broadcast
#define FEATURE_REMOTE_PKT_TX

// Support NMEA sentences for location
#define FEATURE_NMEA_INPUT

// Diagnostic LED (only available on LPC812)
#ifdef LPC812
#define FEATURE_LED
#define LED_PIN 14
#endif


//
// Pins used for SPI (note: pin numbers are are PIO0_x, *not* package pin numbers)
//
#ifdef LPC812
#define SCK_PIN 15
#define SS_PIN 9
#define MOSI_PIN 8
#define MISO_PIN 7
#endif

#ifdef LPC810
#define MISO_PIN 3  // package pin 3
#define SS_PIN 5   // package pin 1
#define SCK_PIN 2 // package pin 4
#define MOSI_PIN 1 // package pin 5
#endif




// UART speed ('baud rate')
#define UART_BPS (9600)
//#define UART_BPS (115200)


//#define USE_SYSTICK


#endif
