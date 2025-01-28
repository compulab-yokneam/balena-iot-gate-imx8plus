IMAGE_FSTYPES:append = " balenaos-img"

BALENA_BOOT_PARTITION_FILES:append = " \
    imx-boot_${MACHINE}_${DRAM_CONF}:/imx-boot-${MACHINE}-sd.bin-flash_evk \
"

MACHINE_CFG_TOOL:iot-gate-imx8plus = " iot-gate-imx8plus-config "
MACHINE_CFG_TOOL:iotdin-imx8p = " iotd-imx8p-config "

IMAGE_INSTALL:append = " \
    imx-boot \
    linux-firmware-ax200 \
    linux-firmware-ax210 \
    firmware-imx-sdma-imx7d \
    wireless-regdb-static \
    eeprom-util \
    keyctl-caam \
    mbpoll \
    mp-verification-tool \
    libgpiod \
    libgpiod-tools \
    grub-editenv \
    ${MACHINE_CFG_TOOL} \
"

IMAGE_INSTALL:remove = "kernel-image"
IMAGE_INSTALL:remove = "packagegroup-fsl-optee-imx"
IMAGE_INSTALL:remove = "jailhouse"
IMAGE_INSTALL:remove = "nvme-cli"

CORE_IMAGE_EXTRA_INSTALL:remove = " gpsd gps-utils connman wvdial ppp modemmanager "
IMAGE_ROOTFS_SIZE = "487424"
