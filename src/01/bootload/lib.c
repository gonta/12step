#include "defines.h"
#include "serial.h"
#include "lib.h"

/* １文字送信  */
int putc(unsigned char c)
{
  if (c == '¥n')
    serial_send_byte(SERIAL_DEFAULT_DEVICE, '¥r');
  return serial_send_byte(SERIAL_DEFAULT_DEVICE, c);
}

/* １文字送信  */
int puts(unsigned char *str)
{
  while (*str)
    putc(*(str++));
  return 0;
}
