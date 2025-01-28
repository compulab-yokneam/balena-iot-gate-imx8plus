DEPENDS:append = " \
    virtual/bootloader \
"

do_configure[nostamp] = "1"
do_compile[depends] += "virtual/bootloader:do_deploy"
do_compile[nostamp] = "1"

UUU_BOOTLOADER_UNTAGGED = "imx-boot-${MACHINE}-untagged"

do_deploy:append () {
	IMX_BOOT_NAME=$(basename $(readlink -e ${DEPLOYDIR}/imx-boot))
	ln -sf ${IMX_BOOT_NAME} ${DEPLOYDIR}/imx-boot_${MACHINE}_${DRAM_CONF}
}
