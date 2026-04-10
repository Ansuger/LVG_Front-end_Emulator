#include "user_main.h"
#include "lvgl/lvgl.h"
 

void user_main() {

    //创建对象
    lv_obj_t* obj1 = lv_obj_create(lv_scr_act());//以屏幕作为父对象创建对象
    lv_obj_t* obj2 = lv_obj_create(obj1);//以现有对象作为父对象创建对象
    lv_obj_t* obj3 = lv_obj_create(obj1);
    lv_obj_t* obj4 = lv_obj_create(obj1);
    //大小设置
    lv_obj_set_width(obj1, 400);//设置对象宽度
    lv_obj_set_height(obj1, 300);//设置对象高度
    lv_obj_set_size(obj2, 100, 100);//设置对象宽和高
    lv_obj_set_size(obj3, 100, 150);
    lv_obj_set_size(obj4, 100, 100);
    //位置设置
    lv_obj_set_x(obj1, 50);//设置对象x坐标
    lv_obj_set_y(obj1, 50);//设置对象y坐标
    lv_obj_set_pos(obj1, 100, 100);//设置对象x+y坐标
    //对齐设置
    lv_obj_set_align(obj2, LV_ALIGN_LEFT_MID);//以父对象中心对齐
    lv_obj_set_align(obj3, LV_ALIGN_CENTER);//以父对象右侧对齐
    lv_obj_set_align(obj4, LV_ALIGN_RIGHT_MID);//以父对象右侧对齐
    //lv_obj_align(obj2, LV_ALIGN_BOTTOM_MID, 50, 50);//参照父对象对齐再偏移
    //lv_obj_align_to(obj3, obj2, LV_ALIGN_CENTER,0,0);//参照其他对象对齐
    //样式设置
    static lv_style_t sty;//一定要静态/全局/动态分配 
    lv_style_init(&sty);//初始化普通样式
    lv_style_set_bg_color(&sty, lv_color_hex(0xfa7299));//设置样式的背景颜色
    lv_obj_add_style(obj2, &sty, LV_STATE_DEFAULT);//为部件添加样式
    lv_obj_set_style_bg_color(obj3, lv_color_hex(0xfb9502), LV_STATE_PRESSED);//本地样式添加

    
} 
