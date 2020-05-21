/home/centos/firesim/target-design/chipyard/riscv-tools-install/bin/riscv64-unknown-elf-gcc \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/../env \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/common \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/median \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/qsort \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/rsort \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/towers \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/vvadd \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/multiply \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/mm \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/dhrystone \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/spmv \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/mt-vvadd \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/mt-matmul \
  -I/home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/pmp \
  -DPREALLOCATE=1 -mcmodel=medany -static -std=gnu99 -O2 -ffast-math -fno-common -fno-builtin-printf \
  -o test.riscv \
  /home/centos/firesim/target-design/chipyard/sims/verilator_org/test.c \
  /home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/common/syscalls.c \
  /home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/common/crt.S \
  -static -nostdlib -nostartfiles -lm -lgcc -T \
  /home/centos/firesim/target-design/chipyard/toolchains/riscv-tools/riscv-tests/build/../benchmarks/common/test.ld
