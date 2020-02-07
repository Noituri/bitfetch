#include <stdio.h>
#include <stdlib.h>
#include <pwd.h>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include <unistd.h>

#if BITFETCH_GENTOO
#include "distros/gentoo.h"
#elif BITFETCH_ARCH
#include "distros/arch.h"
#elif BITFETCH_CRUX
#include "distros/crux.h"
#elif BITFETCH_UBUNTU
#include "distros/ubuntu.h"
#elif BITFETCH_VOID
#include "distros/void.h"
#else
#include "distros/linux.h"
#endif

int main()
{
    struct utsname uinfo;
    struct sysinfo sinfo;
    struct passwd *pw = getpwuid(geteuid());
    double loads[3] = {0};

    uname(&uinfo);
    sysinfo(&sinfo);
    getloadavg(loads, 3);

    /* print all information */
    fprintf(stdout,
            "\n"
            COL_DIST_B LOGO_1L "%s" COL_FG_B "@"                 COL_DIST "%s\n"                        COL_RES
            COL_DIST_B LOGO_2L      COL_FG_B "distro:  " COL_RES COL_DIST DISTRONAME"\n"                COL_RES
            COL_DIST_B LOGO_3L      COL_FG_B "kernel:  " COL_RES COL_DIST "%s\n"                        COL_RES
            COL_DIST_B LOGO_4L      COL_FG_B "uptime:  " COL_RES COL_DIST "%lih %lim\n"                 COL_RES
            COL_DIST_B LOGO_5L      COL_FG_B "loadavg: " COL_RES COL_DIST "%.2f %.2f %.2f\n"            COL_RES
            COL_DIST_B LOGO_6L      COL_FG_B "shell:   " COL_RES COL_DIST "%s\n"                        COL_RES
            COL_DIST_B LOGO_7L      COL_FG_B "ram:     " COL_RES COL_DIST "%lum / %lum / %lum / %lum\n" COL_RES
            COL_DIST_B LOGO_8L      COL_FG_B "swap:    " COL_RES COL_DIST "%lum / %lum\n"               COL_RES
            COL_DIST_B LOGO_9L      COL_FG_B "procs:   " COL_RES COL_DIST "%d\n"                        COL_RES

            "\n",
            pw -> pw_name, uinfo.nodename,
            uinfo.release,
            sinfo.uptime / 3600, (sinfo.uptime / 60) - (sinfo.uptime / 3600 * 60),
            loads[0], loads[1], loads[2],
            pw -> pw_shell,
            sinfo.totalram / 1048576, sinfo.freeram / 1048576, sinfo.sharedram / 1048576, sinfo.bufferram / 1048576,
            sinfo.totalswap / 1048576, sinfo.freeswap / 1048576,
            sinfo.procs
        );

    return 0;
}
