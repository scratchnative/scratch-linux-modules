#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
int _printk(const char * str,...);
void scratch_main(void)
{

_printk("\0016 Hello world!","");
}
