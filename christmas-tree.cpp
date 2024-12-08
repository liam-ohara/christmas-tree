#include <iostream>
#include <string>

using namespace std;

string makeStar(int treeSize);
string makeTree(int treeSize);

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

    cout << "\n" << makeStar(treeSize) << makeTree(treeSize);

    return 0;
}

string makeStar(int treeSize) {
    string star = "";
    int numberSpaces = treeSize / 2;
    string leftSpace = "";
    string leftSpaceMiddle = "";
    string asterisk = "*";
    string middle = "* * *";
    string stem = "|";

    for (int i = 0; i < numberSpaces; i++) {
        leftSpace += " ";

    }

    for (int j = 0; j < numberSpaces - 2; j++) {
        leftSpaceMiddle += " ";

    }

    star += leftSpace;
    star += asterisk;
    star += "\n";
    star += leftSpaceMiddle;
    star += middle;
    star += "\n";
    star += leftSpace;
    star += asterisk;
    star += "\n";
    star += leftSpace;
    star += stem;
    star += "\n";

    return star;

}

string makeTree(int treeSize) {

    string tree = "";
   
    int numberAsterisks = 1;
    int numberRows = (treeSize / 2) + 1;
    for (int i = 1; i <= numberRows; i++) {
        int numberSpaces = numberRows - i;
        string leftSpace = "";
        string asterisk = "";
        
        for (int j = 0; j < numberSpaces; j ++) {
            leftSpace += " ";
        }

        for (int k = 0; k < numberAsterisks; k ++) {
            asterisk += "*";
        }

        tree += leftSpace;
        tree += asterisk; 
        tree += "\n";
        numberAsterisks += 2;
        leftSpace = "";
        asterisk = "";
    }

    return tree;

}