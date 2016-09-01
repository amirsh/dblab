cd experiments
cp extract_runtime.sh pardis_clib.h makefile run_all.sh compliant
cp extract_runtime.sh pardis_clib.h makefile run_all.sh l1
cp extract_runtime.sh pardis_clib.h makefile run_all.sh l2
cp extract_runtime.sh pardis_clib.h makefile run_all.sh l3
cp extract_runtime.sh pardis_clib.h makefile run_all.sh opt
echo "running tpch-compliant"
cd compliant
make
./run_all.sh
./extract_runtime.sh
cd ..
echo "running dsl-stack with two levels"
cd l1
make
./run_all.sh
./extract_runtime.sh
cd ..
echo "running dsl-stack with three levels"
cd l2
make
./run_all.sh
./extract_runtime.sh
cd ..
echo "running dsl-stack with four levels"
cd l3
make
./run_all.sh
./extract_runtime.sh
cd ..
echo "running dsl-stack with all levels"
cd opt
make
./run_all.sh
./extract_runtime.sh
echo "running memory profiling experiments"
cd mem
make
./run_all.sh
./extract_profile_mem.sh
