// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: waveshare43-minimal

#ifndef _WAVESHARE43_MINIMAL_UI_H
#define _WAVESHARE43_MINIMAL_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_FirstScreen
void ui_FirstScreen_screen_init(void);
extern lv_obj_t *ui_FirstScreen;
void ui_event_Button1( lv_event_t * e);
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Label1;
// SCREEN: ui_SecondScreen
void ui_SecondScreen_screen_init(void);
extern lv_obj_t *ui_SecondScreen;
void ui_event_Button2( lv_event_t * e);
extern lv_obj_t *ui_Button2;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui____initial_actions0;




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
