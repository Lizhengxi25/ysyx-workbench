deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/gjb_lizhengxi/Documents/ysyx-workbench/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
