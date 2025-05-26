**Repository for ZEUS 8-bit hobby computer.**
https://www.tindie.com/products/georgysb/zeus-8-bit-hobby-computer-kit/

ZEUS is a custom modular standalone 8-bit computer kit for boys 40+ and computer science students. It was designed to be robust and handy for Z80 assembly language learning and code developing in a bootstrapping way.  I always wanted to have a computer good for lowest possible level of programming (machine code/assembly). My wish was to enjoy the magic of gradual bringing to life a piece of a hardware, where I can control everything with use of simple yet effective machine language subroutines, reinventing my own ways towards building operating system, assembler/disassembler and maybe even some homebrew high level language.  And this small machine had to have an ability to exchange data with a modern PC, but also be completely autonomous from it.  My first 8-bit design was based on 3 solderless breadboards. And the experience of hand wiring hundreds of connections made me dream of a common bus modular PCB design. And this kit is the final result of that effort and it can be further expanded with some additional modules, that now are easy to develop and test with this kit.

**ZEUS specs:**  
Z80 CPU 10 MHz   
EEPROM 32 kB  
SRAM 128 kB (supports up to 512 kB)  
TFT2.8" 320x240 (ILI9341)  
UART-USB 115200 baud  
PS/2 port for keyboard  

**ZEUS memory map:**  
highmem($8000-$FFFF) SRAM  
lowmem($0000-$7FFF) SRAM banks C,D,E  
lowmem($0000-$7FFF) EEPROM bank F

During design development I decided to use SMD capacitors and resistors with footprints large enough for soldering iron. It made ZEUS modules compact and neat while still simple enough to solder. I have also designed a simple and compact shield which turns Arduino MEGA into EEPROM programmer, that is necessary for bootstrap coding. There is latest version of Arduino code for writing ZEUS Monitor to EEPROM with use of my shield.

**ZEUS kit consists of:**  
ZEUS6 backboard  
ZEUS CPU module  
ZEUS MEM128k (MEM512k) module  
ZEUS SIO module  
ZEUS TFT2.8 module  
ZEUS GPIO module (optional, up to 4 in a system)  

Apart from 40-wire Z80 CPU bus ZEUS has auxiliary bus for System Register Q0-Q7 (partially used for memory bank switching), interrupt daisy-chaining (see Z80 manual) AX0-AX7 and UART signals Rx/Tx. ZEUS is powered through USB-B port which also used for communication with PC in case UART-USB bridge IC (MCP2221A) is installed in backboard. In another case one can use FTDI header on ZEUS SIO module for communication with external world. ZEUS TFT module has GPO line "LED" which drives orange LED and also can be used as CS for TFT driver IC (ILI9341). TFT Arduino shield is also equipped with microSD card slot which can be used for data storage. It's better to use microSD card up to 2GB as such cards can process smaller chunks of data at a time. MicroSD card is not included in the kit. ZEUS SIO module is compatible with any Z80 family SIO (0,1 or 2). ZEUS MEM128k module has WR-WRE jumper which provides (if shorted) opportunity to write data to EEPROM right in the module. But AT28C256-15PU is too slow for 10MHz system clock, so if you don't want to corrupt EEPROM data you should switch system clock to 7.3728MHz (by removing 10MHz generator from ZEUS CPU module and shorting CLK-UCLK jumper on ZEUS SIO module) before writing data to EEPROM.

Have questions?
georgysb@mail.ru
