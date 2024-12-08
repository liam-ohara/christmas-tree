#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    int treeSize = 0;
    bool isTreeSizeInvalid = true;

    while (isTreeSizeInvalid) {
        cout << "Please enter the size of your tree (between 3 and 80): ";
        cin >> treeSize;

        if (treeSize > 80 || treeSize < 3) {
            cout << "\n Invalid tree size. Tree size must be between 3 and 80. \n";

        } else {
            isTreeSizeInvalid = false;

        }
    }


    return 0;
}