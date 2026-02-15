#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#include <sys/ioctl.h>
#endif

int main() {
    // --- OS detection ---
#ifdef _WIN32
    printf("Operating System: Windows\n");
#elif __APPLE__
    printf("Operating System: macOS\n");
#elif __linux__
    printf("Operating System: Linux\n");
#else
    printf("Operating System: Unknown\n");
#endif

    // --- Terminal size detection ---
#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if(GetConsoleScreenBufferInfo(hConsole, &csbi)) {
        int cols = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        int rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
        printf("Terminal size: %d rows × %d cols\n", rows, cols);
    } else {
        printf("Cannot get terminal size.\n");
    }
#else
    struct winsize w;
    if(ioctl(STDOUT_FILENO, TIOCGWINSZ, &w) == 0) {
        printf("Terminal size: %d rows × %d cols\n", w.ws_row, w.ws_col);
    } else {
        printf("Cannot get terminal size.\n");
    }
#endif  // <-- This was missing in your code

    // --- UTF-8 / locale detection ---
    char *locale = setlocale(LC_CTYPE, NULL);
    printf("Current locale: %s\n", locale);
    if(locale && strstr(locale, "UTF-8")) {
        printf("UTF-8 encoding detected: ✔\n");
    } else {
        printf("UTF-8 encoding NOT detected: ✘\n");
    }

    // --- Test printing Greek letters ---
    printf("Greek letters test: α β γ δ π λ θ\n");

    return 0;
}
