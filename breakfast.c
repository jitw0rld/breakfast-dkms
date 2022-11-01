#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("WTFPL");
MODULE_AUTHOR("aprung (system developer incorporated llc.)");
MODULE_DESCRIPTION("prints breakfast in dmesg and thats it.");
MODULE_VERSION("four");

static int __init lkm_example_init(void) {
  printk(KERN_INFO "██████╗░██████╗░███████╗░█████╗░██╗░░██╗███████╗░█████╗░░██████╗████████╗██╗██╗██╗██╗\n");
  printk(KERN_INFO "██╔══██╗██╔══██╗██╔════╝██╔══██╗██║░██╔╝██╔════╝██╔══██╗██╔════╝╚══██╔══╝██║██║██║██║\n");
  printk(KERN_INFO "██████╦╝██████╔╝█████╗░░███████║█████═╝░█████╗░░███████║╚█████╗░░░░██║░░░██║██║██║██║\n");
  printk(KERN_INFO "██╔══██╗██╔══██╗██╔══╝░░██╔══██║██╔═██╗░██╔══╝░░██╔══██║░╚═══██╗░░░██║░░░╚═╝╚═╝╚═╝╚═╝\n");
  printk(KERN_INFO "██████╦╝██║░░██║███████╗██║░░██║██║░╚██╗██║░░░░░██║░░██║██████╔╝░░░██║░░░██╗██╗██╗██╗\n");
  printk(KERN_INFO "╚═════╝░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░░░░╚═╝░░╚═╝╚═════╝░░░░╚═╝░░░╚═╝╚═╝╚═╝╚═╝\n");
  return 0;
}

static void __exit lkm_example_exit(void) {
  printk(KERN_INFO "I don't want any of this fake crap!!\n");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);
