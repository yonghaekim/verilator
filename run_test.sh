BINARY=/home/centos/firesim/target-design/chipyard/sims/verilator_org/test.riscv
OUTPUT=example.TestHarness.SmallBoomConfig.out
#EXE=/home/centos/firesim/target-design/chipyard/sims/verilator_org/simulator-chipyard-LargeBoomConfig
EXE=/home/centos/firesim/target-design/chipyard/sims/verilator_org/simulator-chipyard-SmallBoomConfig

rm -rf $OUTPUT
set -o pipefail && $EXE +max-cycles=10000000 +verbose $BINARY 3>&1 1>&2 2>&3 | /home/centos/firesim/target-design/chipyard/riscv-tools-install/bin/spike-dasm > $OUTPUT
