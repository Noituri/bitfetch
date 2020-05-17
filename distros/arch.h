#ifndef BITFETCH_H
#define BITFETCH_H

#include "colors.h"

#define DISTRO_NAME "アーチ Linux"
#define COL_DIST    COL_CYAN
#define COL_DIST_B  COL_CYAN_B

#define DISTRO_LOGO COL_DIST_B "\n"                 \
                               "       /\\\n"       \
                               "      /  \\\n"      \
                               "     /\\   \\\n"    \
                               "    /  __  \\\n"    \
                               "   /  (  )  \\\n"   \
                               "  / __|  |__\\\\\n" \
                               " /.`        `.\\\n"
#define PKG_NUMBER_CMD "pacman -Qq | wc -l"

#define DISTRO_LOGO_LINE_COUNT "8"
#define DISTRO_LOGO_WIDTH      "16"

#endif
