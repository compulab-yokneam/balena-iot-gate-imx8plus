SUMMARY = "Balena bootloader based on Compulab Linux Kernel for compulab-imx8mm"

SRCBRANCH = "lf-5.15.y"
KERNEL_SRC = "git://github.com/nxp-imx/linux-imx.git;protocol=https"
SRC_URI = "${KERNEL_SRC};branch=${SRCBRANCH}"

SRCREV = "fa6c3168595c02bd9d5366fcc28c9e7304947a3d"

# PV is defined in the base in linux-imx.inc file and uses the LINUX_VERSION definition
# required by kernel-yocto.bbclass.
#
# LINUX_VERSION define should match to the kernel version referenced by SRC_URI and
# should be updated once patchlevel is merged.
LINUX_VERSION = "5.15.32"
