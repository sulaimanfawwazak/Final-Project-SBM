// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: test-ui-spotify

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_spotify = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_spotify, &ui_img_1935606821);
    lv_obj_set_width(ui_spotify, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_spotify, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_spotify, 0);
    lv_obj_set_y(ui_spotify, -60);
    lv_obj_set_align(ui_spotify, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_spotify, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_spotify, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_backwards = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_backwards, &ui_img_942630693);
    lv_obj_set_width(ui_backwards, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_backwards, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_backwards, -112);
    lv_obj_set_y(ui_backwards, 60);
    lv_obj_set_align(ui_backwards, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_backwards, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_backwards, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_forwards = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_forwards, &ui_img_1094514855);
    lv_obj_set_width(ui_forwards, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_forwards, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_forwards, 112);
    lv_obj_set_y(ui_forwards, 60);
    lv_obj_set_align(ui_forwards, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_forwards, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_forwards, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_playPause = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_playPause, &ui_img_476004375);
    lv_obj_set_width(ui_playPause, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_playPause, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_playPause, 0);
    lv_obj_set_y(ui_playPause, 60);
    lv_obj_set_align(ui_playPause, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_playPause, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_playPause, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}