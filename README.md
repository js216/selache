# Selache: Open-Source Toolchain for SHARC+ DSP

Core toolchain:

- **selas**: SHARC+ assembler
- **selcc**: C99 compiler
- **seld**: LDF-driven linker with processor memory model
- **selload**: generate SHARC+ boot stream (LDR) from ELF

Libraries:

- **libsel**: C standard library (string, math, stdlib, ctype, stdio)
- **selelf**: ELF/archive parsing and writing
- **selinstr**: SHARC+ instruction encoder, disassembler, and VISA
  compression

Utilities:

- **selar**: ELF archive tool for static libraries (.dlb)
- **seldump**: inspect ELF headers, symbols, relocations, hex dump,
  disassembly, archive browsing
- **selhex**: convert Intel HEX32 to Motorola S-record
- **selinit**: generate runtime memory initializer tables
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

The toolchain (selcc, selas, seld, and all other tools) is licensed under
the GNU General Public License, version 3. The runtime library (libsel) is
licensed under the MIT License, so binaries compiled with selcc may be
distributed under any license, including proprietary ones.

SHARC and SHARC+ are trademarks of Analog Devices. This project is not
affiliated with or endorsed by Analog Devices.
