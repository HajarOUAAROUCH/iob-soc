#include "system.h"
#include "periphs.h"
#include "iob-uart.h"
#include "iob-timer.h"

int main()
{
  unsigned long long elapsed;
  unsigned int elapsedu;

  //Read current Timer count, compute elapsed
  elapsed = timer_get_count(TIMER_BASE);
  elapsedu = timer_time_us(TIMER_BASE);

  //init UART
  uart_init(UART_BASE,FREQ/BAUD);
  
  uart_printf("\n\n\nHello world!\n\n\n");

  uart_txwait ();
  
  uart_printf("\nExecution time: %d clocks in %dus @%dMHz (%d MBaud)\n\n",(unsigned int)elapsed, elapsedu, FREQ/1000000, BAUD/1000000);

  uart_txwait ();
  return 0;
}
