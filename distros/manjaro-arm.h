#ifndef BITFETCH_H
#define BITFETCH_H

#include "colors.h"

#define DISTRO_NAME "Manjaro Linux (arm)"
#define COL_DIST    COL_GREEN
#define COL_DIST_B  COL_GREEN_B

#define DISTRO_LOGO COL_DIST_B "\n"                \
                               " |||||||||  ||||\n" \
                               " |||||||||  ||||\n" \
                               " |||||      ||||\n" \
                               " ||||| |||| ||||\n" \
                               " ||||| |||| ||||\n" \
                               " ||||| |||| ||||\n" \
                               " ||||| |||| ||||\n"

#define PKG_NUMBER_CMD "pacman -Qq | wc -l"

#define DISTRO_LOGO_LINE_COUNT "8"
#define DISTRO_LOGO_WIDTH      "17"

#endif
