#define SOKOL_IMPL
#define SOKOL_GFX_SYMBOL_PREFIX sokol_a_
#include "sokol_gfx.h"

int sokol_gfx_prefix_a(void) {
    sg_setup(&(sg_desc){0});
    const sg_api *api = sg_query_api();
    const int valid = api && api->isvalid() && api->isvalid() == sg_isvalid();
    sg_shutdown();
    return valid;
}
