#include <linux/delay.h>
#include <linux/printk.h>

#define DSI_DBG(delay,  str, ...) { void __iomem* dbg_base = ioremap(0xfd922b00, 0x280); printk(KERN_ERR "[DSI DBG]" str "base=%px\n", ##__VA_ARGS__, dbg_base); mdelay(delay); u32 dbg_test = readl_relaxed(dbg_base); printk(KERN_ERR "[DSI DBG]" str "test=0x%x\n", ##__VA_ARGS__, dbg_test); iounmap(dbg_base); mdelay(delay);}
#define DSI_MSG(str, ...) { printk(KERN_ERR "[DSI DBG]" str, ##__VA_ARGS__);}