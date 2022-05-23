#define __LIBRARY__
#include <unistd.h>
#include <linux/kernel.h>

int sys_whoami() {
	printk("root\n");
	return 4;
}
