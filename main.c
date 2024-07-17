#include <linux/module.h>

static struct file_system_type lfs_type = {
	.name	= "lfs",
};

static int __init init_lfs(void)
{
	return register_filesystem(&lfs_type);
}

static void __exit exit_lfs(void)
{
	unregister_filesystem(&lfs_type);
}

MODULE_AUTHOR("Injae Kang");
MODULE_LICENSE("GPL");

module_init(init_lfs)
module_exit(exit_lfs)
