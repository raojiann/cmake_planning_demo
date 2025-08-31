#include <iostream>
#include "process.h"
#include "show_result.h"
using std::cout, std::endl;

int main() {
    cout << "planing start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planing end" << endl;

    cout << "show result start" << endl;
    ShowResult show;
    show.drawResult();
    cout << "show result end" << endl;
    return 0;
}