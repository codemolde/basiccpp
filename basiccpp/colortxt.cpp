#include <iostream>

using namespace std;
// Helper to apply style
void printStyled(const string& name, int code) {
    cout << "\033[" << code << "m" << name << " (Code: " << code << ")\033[0m" << endl;
}

int main() {
    cout << "\033[1;32mGreen Text\033[0m" << endl;  // Green
    cout << "\033[1;31mRed Text\033[0m" << endl;    // Red
    cout << "\033[1;34mBlue Text\033[0m" << endl;   // Blue
    cout << "\033[0mDefault Color" << endl;         // Reset
    cout << "\033[1;33mhello world" << endl;
    cout << "what the heck\033[0m" << endl;
    cout << "\033[1;35mhello world\033[0m" << endl;
    cout << "\033[2;31mhello world\033[0m" << endl;
    cout << "\033[3;32mhello world\033[0m" << endl;
    cout << "\033[0;36mhello world\033[0m" << endl;
    cout << "\033[1;30;47mBlack text on white background\033[0m" << endl;
    cout << "\033[5;30;41mhello world jksjdsks sajbsk sjsdbdsa mshjsd nss" << endl;
    cout << "sjsjhdjhs shjdb d hdbdsshd s  kbs s shsbe e ihdk cb bn b id s" << endl;
    cout << "sjjs sdiubf eiu isf ks sioe die dk i h uis  \033[0m" << endl;
    cout << "\033[5;31mhello world\033[0m" << endl;



        cout << "=== ANSI Text Styles Demo ===" << endl;

        printStyled("Normal text", 0);
        printStyled("Bold text", 1);
        printStyled("Dim text", 2);
        printStyled("Italic text (may not show on all terminals)", 3);
        printStyled("Underlined text", 4);
        printStyled("Blinking text", 5);
        printStyled("Inverted (reverse) colors", 7);
        printStyled("Hidden (invisible)", 8);
        printStyled("Strikethrough text", 9);

        cout << endl << "=== Combine Styles (Bold + Underline + Color) ===" << endl;
        cout << "\033[1;4;36mBold + Underlined + Cyan\033[0m" << endl;

    return 0;
}