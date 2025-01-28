do_install:prepend () {
    mkdir -p ${S}/${BPN}/lib/udev/rules.d
    mv ${S}/${BPN}/etc/udev/rules.d/* ${S}/${BPN}/lib/udev/rules.d/
}
