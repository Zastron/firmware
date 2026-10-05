#pragma once

#include "lvgl.h"
class Themes
{
  public:
    // eRed is kept for wire compatibility with device_ui.proto; Material adds a fourth palette.
    enum Theme { eDark, eLight, eRed, eMaterial };
    static const char *name(enum Theme th);

    static void initStyles(void);
    static enum Theme get(void);
    static void set(enum Theme th);
    static void recolorButton(lv_obj_t *obj, bool enabled, lv_opa_t opa = 255);
    static void recolorImage(lv_obj_t *obj, bool enabled);
    static void recolorText(lv_obj_t *obj, bool enabled);
    static void recolorTopLabel(lv_obj_t *obj, bool alert);
    static void recolorTableRow(lv_draw_fill_dsc_t *fill_draw_dsc, bool odd);

  private:
    Themes(void) = default;
};