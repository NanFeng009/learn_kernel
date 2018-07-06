# If called directly from the command line, invoke the kernel build system.
ifeq ($(KERNELRELEASE),)
 
	KERNELDIR :=/lib/modules/$(shell uname -r)/build   #将目录改为内核所在目录
	PWD := $(shell pwd)

all: module query_app
 
module:
	$(MAKE) -C $(KERNELDIR) SUBDIRS=$(PWD) modules
 
clean:
	$(MAKE) -C $(KERNELDIR) SUBDIRS=$(PWD) clean
	${RM} query_app
 
# Otherwise KERNELRELEASE is defined; we've been invoked from the
# kernel build system and can use its language.
else
 
	obj-m := query_ioctl.o
 
endif
