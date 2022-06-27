#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bharath Reddy");
MODULE_DESCRIPTION("A simple hello world module");
MODULE_VERSION("0.01");

extern void scratch_main(void);

static int scratch_init(void) {

  scratch_main();

  return 0;
}

void scratch_exit(void) {}

module_init(scratch_init);
module_exit(scratch_exit);
