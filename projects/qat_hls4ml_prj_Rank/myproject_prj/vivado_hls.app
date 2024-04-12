<project xmlns="com.autoesl.autopilot.project" name="myproject_prj" top="myproject_axi">
    <files>
        <file name="../../myproject_test.cpp" sc="0" tb="1" cflags=" -std=c++0x -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="../../firmware/weights" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="../../tb_data" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="firmware/myproject_axi.cpp" sc="0" tb="false" cflags="-std=c++0x" blackbox="false" csimflags=""/>
        <file name="firmware/myproject.cpp" sc="0" tb="false" cflags="-std=c++0x" blackbox="false" csimflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>
