# Selache: Open-Source Toolchain for SHARC+ DSP

- **selelf**: shared library --- ELF/archive parsing and writing,
  SHARC+ 48-bit instruction encoder/disassembler, test utilities
- **selar**: ELF archive tool for static libraries (.dlb)
- **seldump**: ELF inspector --- headers, symbols, relocations,
  hex dump, disassembly, archive browsing
- **selsyms**: print global/weak symbols as LDF RESOLVE() lines
- **selpatch**: extract or replace raw section content in ELF
- **selhex**: convert Intel HEX32 to Motorola S-record
- **selinit**: generate runtime memory initializer tables
- **selmem**: report memory usage vs. processor memory map
- **selload**: generate SHARC+ boot stream (LDR) from ELF
- **seld**: LDF-driven linker with SHARC+ memory model
- **selas**: SHARC+ assembler (48-bit instruction encoding)
- **selcc**: C99 compiler

### Getting Started

Build all tools and add to path:

    cargo build --release
    export PATH="$PWD/target/release:$PATH"

Example workflow:

    selcc -proc ADSP-21569 -c -o main.doj main.c
    selas -proc ADSP-21569 -o start.doj start.asm
    seld -proc ADSP-21569 -T app.ldf -o app.dxe main.doj start.doj
    selload -proc ADSP-21569 -o app.ldr app.dxe

### Author

Jakob Kastelic (Stanford Research Systems)

Licensed under the GNU General Public License, version 3. SHARC and
SHARC+ are trademarks of Analog Devices. This project is not affiliated
with or endorsed by Analog Devices.
