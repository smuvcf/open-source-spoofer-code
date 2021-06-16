// i'm releasing it here : github.com/5nx
// made with stream on \ not pasted :p
// i can actually code dogs
// made by damo#4444
// based on my dick
// tools used to code: BRAIN
// credits: damo, me
// gay.club doesn't exist

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <gdiplus.h>
#include <string>
#include <fstream>
#include <WinInet.h>
#include <random>
#include <tlhelp32.h>
#include <conio.h>
#include <comdef.h>
#include <tchar.h>
#include <mmsystem.h>
#include <CommCtrl.h>
#include <debugapi.h>
#include <time.h>
#include <stdlib.h>
#include <Shlwapi.h>
#pragma comment (lib, "urlmon.lib")
using namespace std;

auto RandomTitle = [](int iterations) {
    std::string Title;
    for (int i = 0; i < iterations; i++)
        Title += rand() % 255 + 1;
    return Title;
};

// i'm releasing it here : github.com/5nx
// made with stream on \ not pasted :p
// i can actually code dogs
// made by damo#4444
// based on my dick
// tools used to code: BRAIN
// credits: damo, me
// gay.club doesn't exist

void checkadmin() {
    bool IsRunningAsAdmin = false;

    BOOL fRet = FALSE;
    HANDLE hToken = NULL;
    if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken)) {
        TOKEN_ELEVATION Elevation;
        DWORD cbSize = sizeof(TOKEN_ELEVATION);
        if (GetTokenInformation(hToken, TokenElevation, &Elevation, sizeof(Elevation), &cbSize)) {
            fRet = Elevation.TokenIsElevated;
        }
    }
    if (hToken) {
        CloseHandle(hToken);
    }
    IsRunningAsAdmin = fRet;

    if (!IsRunningAsAdmin) {
        int msgboxID = MessageBoxA(
            NULL,
            (LPCSTR)"run as admin.",
            (LPCSTR)"gay.club | error",
            MB_OK
        );
        exit(-1);
    }
}

 // i'm releasing it here : github.com/5nx
// made with stream on \ not pasted :p
// i can actually code dogs
// made by damo#4444
// based on my dick
// tools used to code: BRAIN
// credits: damo, me
// gay.club doesn't exist

int loading()
{
    SetConsoleTitleA(RandomTitle(rand() ^ 100 + 9).c_str());
    system("TASKKILL /F /IM FortniteClient-Win64-Shipping.exe >NUL 2> 1");
    system("TASKKILL /F /IM EpicGamesLauncher.exe >NUL 2> 1");
    system("TASKKILL /F /IM UnrealCEFSubProcess.exe");
    checkadmin();
    system("color 6");
    printf("w");
    Sleep(50);
    printf("e");
    Sleep(50);
    printf("l");
    Sleep(50);
    printf("c");
    Sleep(50);
    printf("o");
    Sleep(50);
    printf("m");
    Sleep(50);
    printf("e");
    Sleep(50);
    printf(" ");
    Sleep(50);
    printf("t");
    Sleep(50);
    printf("o");
    Sleep(50);
    printf(" ");
    Sleep(50);
    printf("g");
    Sleep(50);
    printf("a");
    Sleep(50);
    printf("y");
    Sleep(50);
    printf(".");
    Sleep(50);
    printf("c");
    Sleep(50);
    printf("l");
    Sleep(50);
    printf("u");
    Sleep(50);
    printf("b");
    Sleep(50);
    printf(" S");
    Sleep(50);
    printf("p");
    Sleep(50);
    printf("o");
    Sleep(50);
    printf("o");
    Sleep(50);
    printf("f");
    Sleep(50);
    printf("e");
    Sleep(50);
    printf("r");
    Sleep(50);
  
// i'm releasing it here : github.com/5nx
// made with stream on \ not pasted :p
// i can actually code dogs
// made by damo#4444
// based on my dick
// tools used to code: BRAIN
// credits: damo, me
// gay.club doesn't exist
  
    int i = 0;
    char load[26];
    while (i < 25)
    {
        system("cls");
        load[i++] = '#';
        load[i] = '\0';

        printf("                    LOADING");
        printf("\n\n        [%-25s]", load);
        system("color 1");
        system("color 2");
        system("color 3");
        system("color 4");
        system("color 5");
        system("color 6");
        system("color 7");
        system("color 8");
        system("color 9");
        system("color a");
        system("color b");
        system("color c");
        system("color d");
        system("color e");
        Sleep(2);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    system("color c");
    printf("\n[-] Closing Fortnite\n[-] Closing UnrealCEFSubProcess\n[-] Closing Epic Games Launcher");
    Sleep(5000);
    system("cls");
    system("color b");
    system("pause");
    system("color c");
}

// i'm releasing it here : github.com/5nx
// made with stream on \ not pasted :p
// i can actually code dogs
// made by damo#4444
// based on my dick
// tools used to code: BRAIN
// credits: damo, me
// gay.club doesn't exist

int main()
{
    loading();
menu:
    system("cls");
    MessageBoxA(NULL, "menu initialized", "gay.club", MB_OK);
    int choice;
    system("color c");
    printf("                   .      .   \n");
    Sleep(200);
    printf(",-. ,-. . .    ,-. |  . . |-. \n");
    Sleep(200);
    printf("| | ,-| | | ,. |   |  | | | | \n");
    Sleep(200);
    printf("`-| `-^ `-| `' `-' `' `-' `-' \n");
    Sleep(200);
    printf(" ,|      /|                   \n");
    Sleep(200);
    printf(" `'     `-'                   \n");
    Sleep(200);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(100);
    printf("[1] Spoof\n[2] Clean\n[3] Check serials\n[4] Bypass BE/EAC\n[5] Discord\n> Your option:");
    cin >> choice;
    if (choice == 1)
    {
        system("cls");
        system("color d");
        system("color c");
        printf("        [!] spoofing do not close window\n");
        Sleep(5000);
        system("cls");
        system("color a");
        printf("        [+] spoofed\n");
        Sleep(1000);
        printf("        [?] returning to menu\n");
        Sleep(1000);
        goto menu;
    }
    if (choice == 2)
    {
        // soon
    }
    if (choice == 3)
    {
        system("wmic bios get serialnumber");
    }
    if (choice == 4)
    {
        system("start cmd");
    }
    if (choice == 5)
    {
        system("start https://www.pornhub.com/");
    }

}

// i'm releasing it here : github.com/5nx
// made with stream on \ not pasted :p
// i can actually code dogs
// made by damo#4444
// based on my dick
// tools used to code: BRAIN
// credits: damo, me
// gay.club doesn't exist
