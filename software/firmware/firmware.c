#include "system.h"
#include "printf.h"
#include "periphs.h"
#include "iob-uart.h"
#include "iob_timer.h"

int main()
{
  unsigned long long elapsed;
  unsigned int elapsedu;

  

  //init UART
  uart_init(UART_BASE,FREQ/BAUD);
  timer_init(TIMER_BASE);

  
  uart_puts("\n\n\nHello Hajar!\n\n\n");

  uart_txwait ();
  
  //Read current Timer count, compute elapsed
  elapsed = timer_get_count(TIMER_BASE);
  elapsedu = timer_time_us(TIMER_BASE);
  
  printf("\nExecution time: %d clocks in %dus @%dMHz (%d MBaud)\n\n",(unsigned int)elapsed, elapsedu, FREQ/1000000, BAUD/1000000);

  timer_stop();

  uart_finish ();
  return 0;
}
