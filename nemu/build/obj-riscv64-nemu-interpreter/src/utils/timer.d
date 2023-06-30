cmd_/home/james/ysyx/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/timer.o := unused

source_/home/james/ysyx/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/timer.o := src/utils/timer.c

deps_/home/james/ysyx/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/timer.o := \
    $(wildcard include/config/timer/gettimeofday.h) \
    $(wildcard include/config/timer/clock/gettime.h) \
    $(wildcard include/config/target/am.h) \
  /home/james/ysyx/ysyx-workbench/nemu/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/james/ysyx/ysyx-workbench/nemu/include/macro.h \
  /home/james/ysyx/ysyx-workbench/nemu/include/debug.h \
  /home/james/ysyx/ysyx-workbench/nemu/include/utils.h \
    $(wildcard include/config/target/native/elf.h) \

/home/james/ysyx/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/timer.o: $(deps_/home/james/ysyx/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/timer.o)

$(deps_/home/james/ysyx/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/timer.o):
