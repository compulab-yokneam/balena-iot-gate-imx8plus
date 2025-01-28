FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

do_install:append() {
	sed -i "s/%%MACHINE%%/${MACHINE}/g" ${D}/init.d/73-abroot
}
