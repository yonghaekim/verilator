BINARY=/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/benchmarks/mt-vvadd.riscv
OUTPUT=mt-vvadd.example.TestHarness.SmallBoomConfig.out

EXE=/home/centos/firesim/target-design/chipyard/sims/verilator_org/simulator-chipyard-SmallBoomConfig

set -o pipefail && $EXE +max-cycles=10000000 +verbose $BINARY 3>&1 1>&2 2>&3 | spike-dasm > $OUTPUT
