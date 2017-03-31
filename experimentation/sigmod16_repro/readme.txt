Owner of artifact grants ACM permission to serve the artifact to users of the ACM Digital Library.
================================================================================
Readme for reproducibility submission of paper ID 977

A) Source code info
Repository: https://github.com/epfldata/dblab
Programming Language: C / Scala
Additional Programming Language info: Scala 2.11 / JVM 1.8
Compiler Info: CLang 2.9
Packages/Libraries Needed: GLib 2.42.1

B) Datasets info
Repository: 
(TPCH SF 0.1 for testing)
https://www.dropbox.com/sh/16xmm2i8v5pmgdr/AADph8McDv8xe7katSkDjRKka?dl=1
Data generators: https://github.com/amirsh/tpch-dbgen

C) Hardware Info
[Here you should include any details and comments about the used hardware in order to be able to accommodate the reproducibility effort. Any information about non-standard hardware should also be included. You should also include at least the following info:]
C1) Processor: Intel(R) Xeon(R) CPU E5-2620 v2 @ 2.10GHz, 6 cores
C2) Caches: 
L1d: 32K
L1i: 32K
L2: 256K
L3: 15360K
C3) Memory: 256GB of DDR3 RAM 1600Mhz
C4) Secondary Storage:  2 commodity HDDs of 2TB, 7200 RPM, 6Gb/s SATA Interface

D) Experimentation Info
D1) Scripts and how-tos to generate all necessary data or locate datasets
./prepareData.sh
D2) Scripts and how-tos to prepare the software for system:
For running the query processing time and memory consumption, CLang is sufficient.
However, for the experiments on compilation time and for regenerating the C code of 
TPCH queries, it requires installing sbt and JVM 1.8.
D3) Scripts and how-tos for all experiments executed for the paper
./runExperiments.sh

E) Operating System Info
Red Hat Enterprise 6.7

================================================================================
