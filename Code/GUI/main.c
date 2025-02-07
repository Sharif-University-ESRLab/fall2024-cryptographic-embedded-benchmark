#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#define BUTTON_RUN 1
#define BUTTON_EXIT 2

HWND hOutputBox;

// Function to execute and display results in a properly formatted table
void execute_and_display(HWND hWnd) {
    system("gcc C:\\Users\\Lenovo\\CLionProjects\\untitled18\\AES.c -o AES.exe && "
           "gcc C:\\Users\\Lenovo\\CLionProjects\\untitled18\\des.c -o des.exe && "
           "gcc C:\\Users\\Lenovo\\CLionProjects\\untitled18\\PRESENT.c -o PRESENT.exe && "
           "gcc C:\\Users\\Lenovo\\CLionProjects\\untitled18\\rsa.c -o rsa.exe");

    const char *files[] = {"AES", "des", "PRESENT", "rsa"};
    char result[2048] = "Welcome to the Crypto Benchmark!\r\n\n"
                        "+--------------+---------------------+---------------------+\r\n"
                        "|  Algo        |  Average Time (s)   |   Worst Time (s)    \r\n"
                        "+--------------+---------------------+---------------------+\r\n";

    for (int i = 0; i < 4; i++) {
        char command[256], avg_time[50] = "N/A", worst_time[50] = "N/A";
        snprintf(command, sizeof(command), "%s.exe > output.txt", files[i]);
        system(command);

        FILE *fp = fopen("output.txt", "r");
        if (!fp) continue;

        char line[100];
        while (fgets(line, sizeof(line), fp)) {
            if (strstr(line, "Average execution time")) {
                sscanf(line, "Average execution time = %s", avg_time);
                fgets(line, sizeof(line), fp);
                sscanf(line, "Worst execution time = %s", worst_time);
                break;
            }
        }
        fclose(fp);

        char buffer[200];
        snprintf(buffer, sizeof(buffer), "| %-7s | %-19s | %-19s \r\n", files[i], avg_time, worst_time);
        strcat(result, buffer);
    }
    strcat(result, "+--------------+---------------------+---------------------+\r\n");

    SetWindowText(hOutputBox, result);
}

// Windows Procedure for handling GUI events
LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE:
            CreateWindow("BUTTON", "Run Leaderboard", WS_VISIBLE | WS_CHILD, 100, 50, 200, 40, hWnd, (HMENU)BUTTON_RUN, NULL, NULL);
            CreateWindow("BUTTON", "Exit", WS_VISIBLE | WS_CHILD, 400, 50, 150, 40, hWnd, (HMENU)BUTTON_EXIT, NULL, NULL);
            hOutputBox = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | ES_AUTOVSCROLL | WS_VSCROLL | ES_READONLY,
                                      50, 120, 700, 500, hWnd, NULL, NULL, NULL);
            break;
        case WM_COMMAND:
            if (LOWORD(wParam) == BUTTON_RUN) {
                execute_and_display(hWnd);
            } else if (LOWORD(wParam) == BUTTON_EXIT) {
                PostQuitMessage(0);
            }
            break;
        case WM_CLOSE:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, uMsg, wParam, lParam);
    }
    return 0;
}

// Main function to create the GUI window
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "LeaderboardWindow";
    RegisterClass(&wc);

    HWND hWnd = CreateWindow("LeaderboardWindow", "Execution Time Leaderboard", WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                             100, 100, 800, 700, NULL, NULL, hInstance, NULL);

    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}
