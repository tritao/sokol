int sokol_gfx_prefix_a(void);
int sokol_gfx_prefix_b(void);

int main(void) {
    return sokol_gfx_prefix_a() && sokol_gfx_prefix_b() ? 0 : 1;
}
