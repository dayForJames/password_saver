#include "lib.h"
#include "tolow.h"
#include "randStr.h"
#include "readingFile.h"
#include "crypt.h"
#include "show.h"
#include "in.h"
#include "out.h"
#include "delete.h"

void replics(short unsigned n) {
    switch(n) {
        case 1:
            cout << "\n1 - Show all sources\n2 - Push back\n3 - Find\n4 - Delete\n\nanswer: ";
            break;
        case 2:
            cout << "\nDo you want to continue? (1/0)\nanswer: ";
            break;
        case 3:
            cout << "\nThanks for using <:\n\n";
            break;
        case 4:
            cout << "\nDelete:\n1 - source\n2 - login\n3 - password\n\nanswer: ";
            break;
        default:
            break;
    }
}

int main()
{
    unsigned short answ;
    while (true) {
        replics(1);
        cin >> answ;
        cout << '\n';
        switch(answ) {
            case 1:
                show();
                break;
            case 2:
                input();
                break;
            case 3:
                output();
                break;
            case 4:
                //delPrep();
                break;
            default:
                cout << "\nNo function was found\n";
                break;
        }
        replics(2);
        cin >> answ;
        if (answ != 1) {
            if (answ == 0) break;
            while (answ != 0 && answ != 1) {
                cout << "\nReTry..Now (1/0)\nanswer: ";
                cin >> answ;
            }
            if (answ == 0) break;
        }
    }
    replics(3);
    return 0;
}
