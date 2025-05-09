// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: TonexOneController_085pj

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PresetHeadingLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_PresetHeadingLabel, 36);
    lv_obj_set_height(ui_PresetHeadingLabel, 23);
    lv_obj_set_x(ui_PresetHeadingLabel, -1);
    lv_obj_set_y(ui_PresetHeadingLabel, -27);
    lv_obj_set_align(ui_PresetHeadingLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PresetHeadingLabel, "?");
    lv_obj_set_style_text_color(ui_PresetHeadingLabel, lv_color_hex(0xD1A60C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PresetHeadingLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_PresetHeadingLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PresetHeadingLabel, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BPMLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_BPMLabel, 28);
    lv_obj_set_height(ui_BPMLabel, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_BPMLabel, -3);
    lv_obj_set_y(ui_BPMLabel, -36);
    lv_obj_set_align(ui_BPMLabel, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_BPMLabel, "BPM");
    lv_obj_set_style_text_font(ui_BPMLabel, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BPM = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_BPM, 38);
    lv_obj_set_height(ui_BPM, 16);
    lv_obj_set_x(ui_BPM, 1);
    lv_obj_set_y(ui_BPM, -21);
    lv_obj_set_align(ui_BPM, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_BPM, "128");
    lv_obj_set_style_text_align(ui_BPM, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BPM, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CStatus = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_CStatus, 16);
    lv_obj_set_height(ui_CStatus, 16);
    lv_obj_set_x(ui_CStatus, -56);
    lv_obj_set_y(ui_CStatus, -35);
    lv_obj_set_align(ui_CStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CStatus, "C");
    lv_obj_set_style_text_align(ui_CStatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CStatus, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_CStatus, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_CStatus, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_CStatus, lv_color_hex(0x563F2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_CStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_CStatus, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MStatus = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_MStatus, 16);
    lv_obj_set_height(ui_MStatus, 16);
    lv_obj_set_x(ui_MStatus, -56);
    lv_obj_set_y(ui_MStatus, -18);
    lv_obj_set_align(ui_MStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MStatus, "M");
    lv_obj_set_style_text_align(ui_MStatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MStatus, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_MStatus, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MStatus, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_MStatus, lv_color_hex(0x563F2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_MStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_MStatus, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DStatus = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_DStatus, 16);
    lv_obj_set_height(ui_DStatus, 16);
    lv_obj_set_x(ui_DStatus, -39);
    lv_obj_set_y(ui_DStatus, -35);
    lv_obj_set_align(ui_DStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DStatus, "D");
    lv_obj_set_style_text_align(ui_DStatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DStatus, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_DStatus, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_DStatus, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_DStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_DStatus, lv_color_hex(0x563F2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_DStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_DStatus, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RStatus = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_RStatus, 16);
    lv_obj_set_height(ui_RStatus, 16);
    lv_obj_set_x(ui_RStatus, -39);
    lv_obj_set_y(ui_RStatus, -18);
    lv_obj_set_align(ui_RStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RStatus, "R");
    lv_obj_set_style_text_align(ui_RStatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RStatus, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_RStatus, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RStatus, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_RStatus, lv_color_hex(0x563F2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_RStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_RStatus, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BottomContainer = lv_obj_create(ui_Screen1);
    lv_obj_remove_style_all(ui_BottomContainer);
    lv_obj_set_width(ui_BottomContainer, 128);
    lv_obj_set_height(ui_BottomContainer, 73);
    lv_obj_set_x(ui_BottomContainer, 0);
    lv_obj_set_y(ui_BottomContainer, 27);
    lv_obj_set_align(ui_BottomContainer, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BottomContainer, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BottomContainer, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BottomContainer, lv_color_hex(0x262525), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BottomContainer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BottomContainer, lv_color_hex(0x563F2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BottomContainer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BottomContainer, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_outline_color(ui_BottomContainer, lv_color_hex(0xFCA204), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_BottomContainer, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_PresetHeadingLabel2 = lv_label_create(ui_BottomContainer);
    lv_obj_set_width(ui_PresetHeadingLabel2, 115);
    lv_obj_set_height(ui_PresetHeadingLabel2, 66);
    lv_obj_set_x(ui_PresetHeadingLabel2, -1);
    lv_obj_set_y(ui_PresetHeadingLabel2, 1);
    lv_obj_set_align(ui_PresetHeadingLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PresetHeadingLabel2, "Preset Name\n");
    lv_obj_set_style_text_align(ui_PresetHeadingLabel2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PresetHeadingLabel2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TopPanel = lv_obj_create(ui_Screen1);
    lv_obj_remove_style_all(ui_TopPanel);
    lv_obj_set_width(ui_TopPanel, 128);
    lv_obj_set_height(ui_TopPanel, 22);
    lv_obj_set_x(ui_TopPanel, 0);
    lv_obj_set_y(ui_TopPanel, -54);
    lv_obj_set_align(ui_TopPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopPanel, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_TopPanel, lv_color_hex(0x2A2A2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_USBStatusOK = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_USBStatusOK, &ui_img_usb_ok_png);
    lv_obj_set_width(ui_USBStatusOK, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_USBStatusOK, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_USBStatusOK, 48);
    lv_obj_set_y(ui_USBStatusOK, 0);
    lv_obj_set_align(ui_USBStatusOK, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_USBStatusOK, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_USBStatusOK, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_USBStatusOK, 120);

    ui_USBStatusFail = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_USBStatusFail, &ui_img_usb_fail_png);
    lv_obj_set_width(ui_USBStatusFail, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_USBStatusFail, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_USBStatusFail, 48);
    lv_obj_set_y(ui_USBStatusFail, 0);
    lv_obj_set_align(ui_USBStatusFail, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_USBStatusFail, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_USBStatusFail, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_USBStatusFail, 120);

    ui_Logo = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_Logo, &ui_img_smythbuilt_png);
    lv_obj_set_width(ui_Logo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Logo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Logo, -36);
    lv_obj_set_y(ui_Logo, 0);
    lv_obj_set_align(ui_Logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Logo, 110);

    ui_BTStatusDisconn = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_BTStatusDisconn, &ui_img_bt_disconn_png);
    lv_obj_set_width(ui_BTStatusDisconn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BTStatusDisconn, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BTStatusDisconn, 25);
    lv_obj_set_y(ui_BTStatusDisconn, -1);
    lv_obj_set_align(ui_BTStatusDisconn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BTStatusDisconn, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BTStatusDisconn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_BTStatusDisconn, 120);

    ui_BTStatusConn = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_BTStatusConn, &ui_img_bt_conn_png);
    lv_obj_set_width(ui_BTStatusConn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BTStatusConn, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BTStatusConn, 25);
    lv_obj_set_y(ui_BTStatusConn, -1);
    lv_obj_set_align(ui_BTStatusConn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BTStatusConn, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BTStatusConn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_BTStatusConn, 120);

    ui_WiFiStatusDisconn = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_WiFiStatusDisconn, &ui_img_wifi_disconn_png);
    lv_obj_set_width(ui_WiFiStatusDisconn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WiFiStatusDisconn, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WiFiStatusDisconn, 5);
    lv_obj_set_y(ui_WiFiStatusDisconn, 0);
    lv_obj_set_align(ui_WiFiStatusDisconn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WiFiStatusDisconn, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WiFiStatusDisconn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_WiFiStatusDisconn, 120);

    ui_WiFiStatusConn = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_WiFiStatusConn, &ui_img_wifi_conn_png);
    lv_obj_set_width(ui_WiFiStatusConn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WiFiStatusConn, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WiFiStatusConn, 5);
    lv_obj_set_y(ui_WiFiStatusConn, 0);
    lv_obj_set_align(ui_WiFiStatusConn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WiFiStatusConn, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WiFiStatusConn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_WiFiStatusConn, 120);


}
