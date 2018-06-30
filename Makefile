ifneq ($(KERNELRELEASE),)  
	obj-m := hello.o        #设置模块名字
else
	KERNELDIR :=/lib/modules/$(shell uname -r)/build   #将目录改为内核所在目录
	PWD := $(shell pwd)  
all:  
	$(MAKE) -C $(KERNELDIR) SUBDIRS=$(PWD) modules  
endif  
clean:  
	rm -f *.o *.ko *.mod.c .hello*  
