//===============================================
// 			 
//
//===============================================

#define MEMSIZE 4096*10

//===============================================
// Библиотеки

#include "/lib/io.h"
#include "/lib/window.h"

//===============================================
// Переменные

window win1=0;

//===============================================
// Window Options 

int width = 350;
int height = 300;
int header_h = 25;
int sidebar_w = 50;
int btn_h = 22;

//===============================================

void main()
{
	io.dir.load(0,DIR_ONLYREAL);
	win1.background = 0xFFFFFF;
	win1.left = 200;
	win1.ondraw = #draw_window;
	win1.width = width;
	win1.height = height;
	win1.create();
}
void draw_window()
{
	/*
	int i;
	for (i=0; i<io.dir.count; i++) WriteText(5,i*8+3,0x80,0xFF00FF,io.dir.position(i));
	DrawCaptButton(100, 10, 100, 22, 22, 0xCCCccc, 0x000000, "Button");
	WriteText(100,50,0x80,0,"Textline small");
	WriteText(100,70,0x90,0,"Textline big");
	*/
	DrawBar(0, 0, width, header_h, 0x66AF86); // header
	DrawBar(0, 0, sidebar_w, height, 0x66AF86); // sidebar
	WriteText(5, header_h/4, 0x80, 0, "KolibriOS Store");
	DrawCaptButton(0, header_h+25, sidebar_w, btn_h, 10, 0xCCCCCC, 0x000000, "Menu");
}