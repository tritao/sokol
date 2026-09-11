#define SOKOL_IMPL
#define SOKOL_GFX_SYMBOL_PREFIX sokol_a_
#include "sokol_gfx.h"

int sokol_gfx_prefix_a(void) {
    sg_setup(&(sg_desc){0});
    const int valid = sg_isvalid() ? 1 : 0;
    sg_shutdown();
    return valid;
}
