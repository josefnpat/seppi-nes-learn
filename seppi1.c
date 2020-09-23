#include "neslib.h"
void main(void) {
  pal_col(0,0x02);	// set screen to dark blue
  pal_col(1,0x14);	// fuchsia
  pal_col(2,0x20);	// grey
  pal_col(3,0x30);	// white
  vram_adr(NTADR_A(2,2));
  vram_write("HELLO, WORLD!", 13);
  ppu_on_all();
  while (1) ;
}

