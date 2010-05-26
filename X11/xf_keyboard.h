
#ifndef __XF_KEYBOARD_H
#define __XF_KEYBOARD_H

#include <freerdp/freerdp.h>

void
xf_kb_init(void);
void
xf_kb_inst_init(rdpInst * inst);
void
xf_kb_send_key(rdpInst * inst, uint16 flags, uint8 keycode);
int
xf_kb_get_toggle_keys_state(rdpInst * inst);
void
xf_kb_focus_in(rdpInst * inst);

#endif
