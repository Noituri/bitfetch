PREFIX = /usr/local
CC = gcc

help:
	@echo "Run \`make build-gentoo\`  to build bitfetch-gentoo.c"
	@echo "Run \`make build-ubuntu\`  to build bitfetch-ubuntu.c"
	@echo "Run \`make build-crux\`    to build bitfetch-crux.c"
	@echo "Run \`make build-void\`    to build bitfetch-void.c"
	@echo "Run \`make build-arch\`    to build bitfetch-arch.c"
	@echo "Run \`make build-example\` to build bitfetch-example.c"
	@echo "Run \`make build-all\`     to build all bitfetch-*.c files"
	@echo ""
	@echo "Run \`make install-gentoo\`  to install bitfetch-gentoo"
	@echo "Run \`make install-ubuntu\`  to install bitfetch-ubuntu"
	@echo "Run \`make install-crux\`    to install bitfetch-crux"
	@echo "Run \`make install-void\`    to install bitfetch-void"
	@echo "Run \`make install-arch\`    to install bitfetch-arch"
	@echo "Run \`make install-example\` to install bitfetch-example"
	@echo ""
	@echo "Use bitfetch-example.c to create a bitfetch's version for another linux distro."

var_info:
	@echo "CC: ${CC}"
	@echo "PREFIX: ${PREFIX}"
	@echo ""

build-arch: var_info
	@${CC} -O3   bitfetch-arch.c -o bitfetch-arch
	@echo       "bitfetch-arch.c -> bitfetch-arch"

build-void: var_info
	@${CC} -O3   bitfetch-void.c -o bitfetch-void
	@echo       "bitfetch-void.c -> bitfetch-void"

build-crux: var_info
	@${CC} -O3   bitfetch-crux.c -o bitfetch-crux
	@echo       "bitfetch-crux.c -> bitfetch-crux"

build-ubuntu: var_info
	@${CC} -O3   bitfetch-ubuntu.c -o bitfetch-ubuntu
	@echo       "bitfetch-ubuntu.c -> bitfetch-ubuntu"

build-gentoo: var_info
	@${CC} -O3   bitfetch-gentoo.c -o bitfetch-gentoo
	@echo       "bitfetch-gentoo.c -> bitfetch-gentoo"

build-example: var_info
	@${CC} -O3   bitfetch-example.c -o bitfetch-example
	@echo       "bitfetch-example.c -> bitfetch-example"

build-all: var_info build-gentoo build-example build-ubuntu build-void build-crux build-arch

.PHONY: install-arch
install-arch: build-arch
	@cp bitfetch-arch ${PREFIX}/bin/bitfetch -v

.PHONY: install-void
install-void: build-void
	@cp bitfetch-void ${PREFIX}/bin/bitfetch -v

.PHONY: install-crux
install-crux: build-crux
	@cp bitfetch-crux ${PREFIX}/bin/bitfetch -v

.PHONY: install-ubuntu
install-ubuntu: build-ubuntu
	@cp bitfetch-ubuntu ${PREFIX}/bin/bitfetch -v

.PHONY: install-gentoo
install-gentoo: build-gentoo
	@cp bitfetch-gentoo ${PREFIX}/bin/bitfetch -v

.PHONY: install-example
install-example: build-example
	@cp bitfetch-example ${PREFIX}/bin/bitfetch -v

.PHONY: uninstall
uninstall:
	@rm ${PREFIX}/bin/bitfetch -v

.PHONY: clean
clean:
	@rm bitfetch-ubuntu bitfetch-gentoo bitfetch-example bitfetch-crux bitfetch-void bitfetch-arch -v || true

