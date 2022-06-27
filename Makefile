scratch-linux-objs := bootstrap.o scratch-output.o
obj-m += scratch-linux.o

EXTRA_CFLAGS += -I/usr/lib/gcc/$(shell gcc -dumpmachine)/$(shell gcc -dumpversion)/include -ffreestanding

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

genfile:
	scratch2exe.py fetch 706685974
	scratchnative project.json.sb3 -o scratch-output.c --freestanding --to-c
	rm -rf project.json.sb3


