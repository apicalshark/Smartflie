#include "gui/MainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

// Windows entry point, checks win32
#ifdef _WIN32
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    int argc = __argc;
    char **argv = __argv;
    QApplication main(argc, argv);
    MainWindow window;
    window.show();
    return main.exec();
}
#endif // _WIN32
