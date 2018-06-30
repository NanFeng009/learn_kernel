#include <linux/init.h>  //所有模块代码中都包含一下两个头文件
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL"); //所有模块代码都应该指定所使用的许可证

static int hello_init(void)  
{  
    printk(KERN_ALERT "Hello,world\n");  
    return 0;  
}   

static void hello_exit(void)  
{  
    printk(KERN_ALERT "Goodbye,Cruel world\n");  

}  

module_init(hello_init);  
module_exit(hello_exit);  
