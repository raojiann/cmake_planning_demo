#include <iostream>
#include "show_result.h"
#include <graphics.h>
using std::cout, std::endl;

void ShowResult::drawResult()
{
    initgraph(500, 500); // 初始化绘图窗口，宽500，高500
    setbkcolor(WHITE);     // 设置背景颜色为白色
    cleardevice();         // 清空绘图窗口

    cout << "Drawing circles: " << endl;
    setlinecolor(BLUE); // 设置线条颜色为蓝色
    setlinestyle(PS_SOLID, 4); // 设置线条样式为实线，宽度为4
    circle(250, 250, 100); // 画一个圆心在(250,250)，半径为100的圆
    circle(250, 250, 200); // 画一个圆心在(250,250)，半径为200的圆

    system("pause"); // 暂停，等待用户按键
    closegraph();    // 关闭绘图窗口
};