// https://learn.adafruit.com/adafruit-kb2040/pinouts

#define MICROPY_HW_BOARD_NAME          "Adafruit KB2040"
#define MICROPY_HW_FLASH_STORAGE_BYTES (7 * 1024 * 1024)

#define MICROPY_HW_USB_VID (0x239A)
#define MICROPY_HW_USB_PID (0x8106)

#define MICROPY_HW_I2C0_SCL  (13)
#define MICROPY_HW_I2C0_SDA  (12)

#define MICROPY_HW_SPI0_SCK  (18)
#define MICROPY_HW_SPI0_MOSI (19)
#define MICROPY_HW_SPI0_MISO (20)

// NeoPixel data GPIO17, power GPIO16

// Red user LED GPIO11

// Boot button GPIO13
