###
### This script helps with patching an HLS IP (hls4ml) for
### later versions of Vivado.
###
### For example, Vivado HLS 2020.1 ---> Vivado 2022.1
###
###

#------------------------------------------------------------------------
PROJECT_NAME=myproject_prj
cd $PROJECT_NAME/solution1/impl/ip/
pwd
#------------------------------------------------------------------------
TOP_MODULE=myproject_axi

# #####
# TODO: How to find the version of the floating point library:
# find /tools/Xilinx/Vivado/2022.1 -name  floating_point_v*
# #####

FLT_REV_OLD=14
FLT_REV_NEW=16

FLT_VER_OLD=7_1_14
FLT_VER_NEW=7_1_16
#------------------------------------------------------------------------
FILES=`find . -name $TOP_MODULE\_ap_fpext_*_no_dsp_32.vhd`
for f in $FILES; do
	sed -i "s/$FLT_VER_OLD/$FLT_VER_NEW/g" $f
	sed -i "s/-- IP Revision: $FLT_REV_OLD/-- IP Revision: $FLT_REV_NEW, patched/g" $f
	sed -i "s/x_ipCoreRevision=$FLT_REV_OLD/x_ipCoreRevision=$FLT_REV_NEW/g" $f
    echo "Update: $f"
done
if [ -z "$FILES" ]; then
    echo "Do nothing"
fi
#------------------------------------------------------------------------
pwd
IP_PACKAGE_ZIP=xilinx_com_hls_$TOP_MODULE\_1_0.zip
rm -rf temp_for_zip_extract
mkdir temp_for_zip_extract
unzip $IP_PACKAGE_ZIP -d temp_for_zip_extract
cd temp_for_zip_extract
pwd
#------------------------------------------------------------------------
FILES=`find . -name $TOP_MODULE\_ap_fpext_*_no_dsp_32.vhd`
for f in $FILES; do
	sed -i "s/$FLT_VER_OLD/$FLT_VER_NEW/g" $f
	sed -i "s/-- IP Revision: $FLT_REV_OLD/-- IP Revision: $FLT_REV_NEW, patched/g" $f
	sed -i "s/x_ipCoreRevision=$FLT_REV_OLD/x_ipCoreRevision=$FLT_REV_NEW/g" $f
    echo "Update: $f"
done
if [ -z "$FILES" ]; then
    echo "Do nothing"
fi
#------------------------------------------------------------------------
zip -r $IP_PACKAGE_ZIP .
mv $IP_PACKAGE_ZIP ..
cd -
rm -rf temp_for_zip_extract
