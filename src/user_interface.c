#include "esp_log.h"

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif
#include "lvgl_helpers.h"

#include "lvgl_adapter.h"
#include "res/fonts/user_fonts.h"

static lv_obj_t * lvgl_draw_label(lv_obj_t * parent, lv_obj_t * ref, lv_align_t ref_align, lv_coord_t x, lv_coord_t y, lv_coord_t w, lv_coord_t h, lv_text_align_t text_align, lv_color_t color, const lv_font_t * font, const char * text);
static lv_obj_t * lvgl_draw_bar(lv_obj_t * parent, lv_obj_t * ref, lv_align_t ref_align, lv_coord_t x, lv_coord_t y, lv_coord_t w, lv_coord_t h, lv_color_t bg_color, lv_color_t bar_grad_color, lv_color_t bar_color);
static lv_obj_t * lvgl_draw_line(lv_obj_t * parent, lv_coord_t x1, lv_coord_t y1, lv_coord_t x2, lv_coord_t y2, lv_coord_t width, lv_color_t color);

void user_interface_init(void) {
    lvgl_acquire_token();

    lv_obj_t * screen  = lv_scr_act();
    lv_obj_set_style_bg_color(screen, lv_color_black(), LV_PART_MAIN | LV_STATE_DEFAULT);

    lvgl_draw_bar(screen, screen, LV_ALIGN_TOP_LEFT, 4, 4, 12, 127, lv_color_make(63, 63, 63), lv_color_make(0, 255, 0), lv_color_make(255, 0, 0));
    lvgl_draw_bar(screen, screen, LV_ALIGN_TOP_LEFT, 224, 4, 12, 127, lv_color_make(63, 63, 63), lv_color_make(0, 255, 0), lv_color_make(255, 0, 0));
    lvgl_draw_label(screen, screen, LV_ALIGN_TOP_LEFT, 20, 4, 52, 16, LV_TEXT_ALIGN_CENTER, lv_color_make(47, 218, 100), &antonio_regular_16, "23:59:59");
    lvgl_draw_line(screen, 20, 24, 219, 24, 1, lv_color_make(127, 127, 127));

    lvgl_release_token();

    ESP_LOGE("LVGL", "lvgl test");
}

static lv_obj_t * lvgl_draw_label(lv_obj_t * parent, lv_obj_t * ref, lv_align_t ref_align, lv_coord_t x, lv_coord_t y, lv_coord_t w, lv_coord_t h, lv_text_align_t text_align, lv_color_t color, const lv_font_t * font, const char * text) {
    lv_obj_t * label = lv_label_create(parent);

    lv_label_set_long_mode(label, LV_LABEL_LONG_CLIP);

    lv_obj_align_to(label, ref, ref_align, x, y);
    lv_obj_set_size(label, w, h);

    lv_obj_set_style_text_align(label, text_align, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(label, color, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, font, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, text);

    return label;
}

static void set_temp(void * bar, int32_t temp)
{
    lv_bar_set_value(bar, temp, LV_ANIM_ON);
}

static lv_obj_t * lvgl_draw_bar(lv_obj_t * parent, lv_obj_t * ref, lv_align_t ref_align, lv_coord_t x, lv_coord_t y, lv_coord_t w, lv_coord_t h, lv_color_t bg_color, lv_color_t bar_grad_color, lv_color_t bar_color) {
	lv_obj_t * bar = lv_bar_create(parent);

    lv_bar_set_range(bar, -100, 100);
    lv_bar_set_mode(bar, LV_BAR_MODE_SYMMETRICAL);

	lv_obj_align_to(bar, ref, ref_align, x, y);
	lv_obj_set_size(bar, w, h);

	lv_obj_set_style_bg_color(bar, bg_color, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(bar, bar_grad_color, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(bar, bar_color, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(bar, (w > h) ? LV_GRAD_DIR_HOR : LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_exec_cb(&a, set_temp);
    lv_anim_set_time(&a, 3000);
    lv_anim_set_playback_time(&a, 1000);
    lv_anim_set_var(&a, bar);
    lv_anim_set_values(&a, -100, 100);
    lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
    lv_anim_start(&a);

    return bar;
}

static lv_obj_t * lvgl_draw_line(lv_obj_t * parent, lv_coord_t x1, lv_coord_t y1, lv_coord_t x2, lv_coord_t y2, lv_coord_t width, lv_color_t color) {
    lv_obj_t * line = lv_line_create(parent);

    lv_point_t * line_points = malloc(sizeof(lv_point_t) * 2);
    line_points[0].x = x1; line_points[0].y = y1;
    line_points[1].x = x2; line_points[1].y = y2;
    lv_line_set_points(line, line_points, 2);

    lv_obj_set_style_line_width(line, width, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(line, color, LV_PART_MAIN | LV_STATE_DEFAULT);

    return line;
}
