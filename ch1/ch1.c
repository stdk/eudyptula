#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("std.feanor <std.feanor@gmail.com>");
MODULE_DESCRIPTION("Module ch1");

static int __init ch1_init(void) {
	printk(KERN_DEBUG "Hello world!\n");
	return 0;
}

static void __exit ch1_exit(void) {

}

module_init(ch1_init);
module_exit(ch1_exit);
