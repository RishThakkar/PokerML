#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/esp2024/rht2122/PokerML/PokerML/quantized_pruned_cnn/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
