#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ANTONIO_REGULAR_12
    #ifdef CONFIG_ANTONIO_REGULAR_12
        #define ANTONIO_REGULAR_12 CONFIG_ANTONIO_REGULAR_12
    #else
        #define ANTONIO_REGULAR_12 0
    #endif
#endif
#ifndef ANTONIO_REGULAR_14
    #ifdef CONFIG_ANTONIO_REGULAR_14
        #define ANTONIO_REGULAR_14 CONFIG_ANTONIO_REGULAR_14
    #else
        #define ANTONIO_REGULAR_14 0
    #endif
#endif
#ifndef ANTONIO_REGULAR_16
    #ifdef CONFIG_ANTONIO_REGULAR_16
        #define ANTONIO_REGULAR_16 CONFIG_ANTONIO_REGULAR_16
    #else
        #define ANTONIO_REGULAR_16 0
    #endif
#endif
#ifndef ANTONIO_REGULAR_18
    #ifdef CONFIG_ANTONIO_REGULAR_18
        #define ANTONIO_REGULAR_18 CONFIG_ANTONIO_REGULAR_18
    #else
        #define ANTONIO_REGULAR_18 0
    #endif
#endif
#ifndef ANTONIO_REGULAR_20
    #ifdef CONFIG_ANTONIO_REGULAR_20
        #define ANTONIO_REGULAR_20 CONFIG_ANTONIO_REGULAR_20
    #else
        #define ANTONIO_REGULAR_20 0
    #endif
#endif
#ifndef ANTONIO_REGULAR_24
    #ifdef CONFIG_ANTONIO_REGULAR_24
        #define ANTONIO_REGULAR_24 CONFIG_ANTONIO_REGULAR_24
    #else
        #define ANTONIO_REGULAR_24 0
    #endif
#endif
#ifndef ANTONIO_REGULAR_36
    #ifdef CONFIG_ANTONIO_REGULAR_36
        #define ANTONIO_REGULAR_36 CONFIG_ANTONIO_REGULAR_36
    #else
        #define ANTONIO_REGULAR_36 0
    #endif
#endif
#ifndef ANTONIO_REGULAR_48
    #ifdef CONFIG_ANTONIO_REGULAR_48
        #define ANTONIO_REGULAR_48 CONFIG_ANTONIO_REGULAR_48
    #else
        #define ANTONIO_REGULAR_48 0
    #endif
#endif
#ifndef ANTONIO_REGULAR_64
    #ifdef CONFIG_ANTONIO_REGULAR_64
        #define ANTONIO_REGULAR_64 CONFIG_ANTONIO_REGULAR_64
    #else
        #define ANTONIO_REGULAR_64 0
    #endif
#endif

#ifndef AWESOME_640_FREE_SOLID_12
    #ifdef CONFIG_AWESOME_640_FREE_SOLID_12
        #define AWESOME_640_FREE_SOLID_12 CONFIG_AWESOME_640_FREE_SOLID_12
    #else
        #define AWESOME_640_FREE_SOLID_12 0
    #endif
#endif
#ifndef AWESOME_640_FREE_SOLID_14
    #ifdef CONFIG_AWESOME_640_FREE_SOLID_14
        #define AWESOME_640_FREE_SOLID_14 CONFIG_AWESOME_640_FREE_SOLID_14
    #else
        #define AWESOME_640_FREE_SOLID_14 0
    #endif
#endif
#ifndef AWESOME_640_FREE_SOLID_16
    #ifdef CONFIG_AWESOME_640_FREE_SOLID_16
        #define AWESOME_640_FREE_SOLID_16 CONFIG_AWESOME_640_FREE_SOLID_16
    #else
        #define AWESOME_640_FREE_SOLID_16 0
    #endif
#endif

#ifndef AGUAFINA_SCRIPT_REGULAR_10
    #ifdef CONFIG_AGUAFINA_SCRIPT_REGULAR_10
        #define AGUAFINA_SCRIPT_REGULAR_10 CONFIG_AGUAFINA_SCRIPT_REGULAR_10
    #else
        #define AGUAFINA_SCRIPT_REGULAR_10 0
    #endif
#endif
#ifndef AGUAFINA_SCRIPT_REGULAR_12
    #ifdef CONFIG_AGUAFINA_SCRIPT_REGULAR_12
        #define AGUAFINA_SCRIPT_REGULAR_12 CONFIG_AGUAFINA_SCRIPT_REGULAR_12
    #else
        #define AGUAFINA_SCRIPT_REGULAR_12 0
    #endif
#endif

#if ANTONIO_REGULAR_12
LV_FONT_DECLARE(antonio_regular_12)
#endif
#if ANTONIO_REGULAR_14
LV_FONT_DECLARE(antonio_regular_14)
#endif
#if ANTONIO_REGULAR_16
LV_FONT_DECLARE(antonio_regular_16)
#endif
#if ANTONIO_REGULAR_18
LV_FONT_DECLARE(antonio_regular_18)
#endif
#if ANTONIO_REGULAR_20
LV_FONT_DECLARE(antonio_regular_20)
#endif
#if ANTONIO_REGULAR_24
LV_FONT_DECLARE(antonio_regular_24)
#endif
#if ANTONIO_REGULAR_36
LV_FONT_DECLARE(antonio_regular_36)
#endif
#if ANTONIO_REGULAR_48
LV_FONT_DECLARE(antonio_regular_48)
#endif
#if ANTONIO_REGULAR_64
LV_FONT_DECLARE(antonio_regular_64)
#endif

#if AWESOME_640_FREE_SOLID_12
LV_FONT_DECLARE(awesome_640_free_solid_12)
#endif
#if AWESOME_640_FREE_SOLID_14
LV_FONT_DECLARE(awesome_640_free_solid_14)
#endif
#if AWESOME_640_FREE_SOLID_16
LV_FONT_DECLARE(awesome_640_free_solid_16)
#endif

#if AGUAFINA_SCRIPT_REGULAR_10
LV_FONT_DECLARE(aguafina_script_regular_10)
#endif
#if AGUAFINA_SCRIPT_REGULAR_12
LV_FONT_DECLARE(aguafina_script_regular_12)
#endif