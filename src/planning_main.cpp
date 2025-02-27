#include <iostream>
#include "process.h"
#include "show_result.h"
using namespace std;

int main() {
    cout << "planning start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planing end" << endl;

    cout << "show result: " << endl;
    ShowResult show;
    show.drawResult();
    
    return 0;
}