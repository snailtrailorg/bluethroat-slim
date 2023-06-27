#include "esp_log.h"

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif
#include "lvgl_helpers.h"

#include "lvgl_adapter.h"
#include "res/fonts/user_fonts.h"

static lv_obj_t * lvgl_draw_label(lv_obj_t * parent, lv_obj_t * reference, lv_align_t reference_align, lv_coord_t x, lv_coord_t y, lv_text_align_t text_align, const char * text, const lv_font_t * font, lv_color_t color);

void user_interface_init(void) {
    lvgl_acquire_token();

    lv_obj_t * screen  = lv_scr_act();
    lv_obj_set_style_bg_color(screen, lv_color_black(), LV_PART_MAIN | LV_STATE_DEFAULT);

    lvgl_draw_label(screen, screen, LV_ALIGN_TOP_LEFT, 20, 4, LV_TEXT_ALIGN_CENTER, "23:59:59", &antonio_regular_16, lv_color_make(47, 218, 100));

    lvgl_release_token();

    ESP_LOGE("LVGL", "lvgl test");
}

static lv_obj_t * lvgl_draw_label(lv_obj_t * parent, lv_obj_t * reference, lv_align_t reference_align, lv_coord_t x, lv_coord_t y, lv_text_align_t text_align, const char * text, const lv_font_t * font, lv_color_t color) {
    lv_obj_t * label = lv_label_create(parent);
    lv_obj_align_to(label, reference, reference_align, x, y);
    lv_label_set_long_mode(label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_align(label, text_align, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(label, color, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, font, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, text);

    return label;
}