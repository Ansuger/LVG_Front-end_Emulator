#include "user_main.h"
#include "lvgl/lvgl.h"
 

void user_main() {

    //创建对象
    lv_obj_t* obj1 = lv_obj_create(lv_scr_act());//以屏幕作为父对象创建对象
    lv_obj_t* obj2 = lv_obj_create(obj1);//以现有对象作为父对象创建对象
    lv_obj_t* obj3 = lv_obj_create(obj1);
    //大小设置
    lv_obj_set_width(obj1, 400);//设置对象宽度
    lv_obj_set_height(obj1, 300);//设置对象高度
    lv_obj_set_size(obj2, 100, 100);//设置对象宽和高
    lv_obj_set_size(obj3, 100, 100);
    //位置设置
    lv_obj_set_x(obj1, 50);//设置对象x坐标
    lv_obj_set_y(obj1, 50);//设置对象y坐标
    lv_obj_set_pos(obj1, 100, 100);//设置对象x+y坐标
    //对齐设置
    lv_obj_set_align(obj2, LV_ALIGN_CENTER);//以父对象中心对齐
    lv_obj_set_align(obj2, LV_ALIGN_RIGHT_MID);//以父对象右侧对齐

     

    
} 
