# Default configuration for microblazeel-softmmu

include pci.mak
CONFIG_PTIMER=y
CONFIG_PFLASH_CFI01=y
CONFIG_SERIAL=y
CONFIG_XILINX=y
CONFIG_XILINX_AXI=y
CONFIG_XILINX_SPI=y
CONFIG_XILINX_ETHLITE=y
CONFIG_SSI=y
CONFIG_SSI_M25P80=y
CONFIG_FDT_GENERIC=$(CONFIG_FDT)
CONFIG_SDHCI=y
CONFIG_SD=y
CONFIG_CADENCE=y
CONFIG_XILINX_SPIPS=y
CONFIG_ARM_GIC=y
