/**
 * @file ex_hello_world.c
 *
 */

/*
 * If you have ported the LittlevGL you are ready to create content on your display.
 * You will create only "Hello world!" label and align it to the middle.
 */

/*********************
 *      INCLUDES
 *********************/
#include "ex_hello_world.h"
#include "lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * Create a simple 'Hello world!' label
 */
void ex_hello_world(void)
{
    /*Create a Label on the currently active screen*/
    lv_obj_t * label1 =  lv_label_create(lv_scr_act(), NULL);

    /*Modify the Label's text*/
    lv_label_set_text(label1, "Hello world!");

    /* Align the Label to the center
     * NULL means align on parent (which is the screen now)
     * 0, 0 at the end means an x, y offset after alignment*/
    lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, 0);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
