#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/esp2024/rht2122/PokerML/PokerML/projects/qat_hls4ml_prj_Suits/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
