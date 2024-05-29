#include<stdint.h>
#include "uart_tx.h"

int main(void)
{
	uart2_tx_init();
	while(1)
	{
		uart2_write('T');

	}
}
