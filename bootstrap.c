#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("MIT");
MODULE_AUTHOR("Abbix");
MODULE_DESCRIPTION("A simple hello world module in Scratch");
MODULE_VERSION("0.0.1");

extern void scratch_main(void);

static int scratch_init(void) {

  scratch_main();

  return 0;
}

void scratch_exit(void) {}

module_init(scratch_init);
module_exit(scratch_exit);
