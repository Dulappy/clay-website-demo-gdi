#include <Windows.h>

HBITMAP img_check1;
HBITMAP img_check2;
HBITMAP img_check3;
HBITMAP img_check4;
HBITMAP img_check5;
HBITMAP img_debugger;
HBITMAP img_declarative;
HBITMAP img_renderer;

void LoadImages() {
	img_check1 = LoadImage(NULL, "images/check_1.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	img_check2 = LoadImage(NULL, "images/check_2.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	img_check3 = LoadImage(NULL, "images/check_3.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	img_check4 = LoadImage(NULL, "images/check_4.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	img_check5 = LoadImage(NULL, "images/check_5.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	img_debugger = LoadImage(NULL, "images/debugger.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	img_declarative = LoadImage(NULL, "images/declarative.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	img_renderer = LoadImage(NULL, "images/renderer.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
}