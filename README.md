# Selache: Open-Source Toolchain for SHARC+ DSP

- **libsel**: C standard library (string, math, stdlib, ctype, stdio)
- **selar**: ELF archive tool for static libraries (.dlb)
- **selas**: SHARC+ assembler
- **selcc**: C99 compiler
- **seld**: LDF-driven linker with processor memory model
- **seldump**: inspect ELF headers, symbols, relocations, hex dump,
  disassembly, archive browsing
- **selelf**: ELF/archive parsing and writing, instruction
  encoder/disassembler
- **selhex**: convert Intel HEX32 to Motorola S-record
- **selinit**: generate runtime memory initializer tables
- **selload**: generate SHARC+ boot stream (LDR) from ELF
- **selmem**: report memory usage vs. processor memory map
- **selpatch**: extract or replace raw section content in ELF
- **selsyms**: print global/weak symbols as LDF RESOLVE() lines

### Getting Started

Build all tools and add to path:

    cargo build --release
    export PATH="$PWD/target/release:$PATH"

Example workflow:

    selcc -proc ADSP-21569 -c -o main.doj main.c
    selas -proc ADSP-21569 -o start.doj start.asm
    seld -proc ADSP-21569 -T app.ldf -o app.dxe main.doj start.doj
    selload -proc ADSP-21569 -o app.ldr app.dxe

### Legal

Author: Jakob Kastelic (Stanford Research Systems, Inc.).

Licensed under the GNU General Public License, version 3.

SHARC and SHARC+ are trademarks of Analog Devices. This project is not
affiliated with or endorsed by Analog Devices.
