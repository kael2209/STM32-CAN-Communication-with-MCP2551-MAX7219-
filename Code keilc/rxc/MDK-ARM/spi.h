#include <stdint.h>

void spi_init(void);
void spi_enabled(void);
void spi_start(void);

void nss_enabled(void);
void nss_disabled(void);

void spi_write(uint8_t data);
void spi_send_muplty(uint8_t *data, int size);
void spi_writereg8(uint8_t reg, uint8_t data);


