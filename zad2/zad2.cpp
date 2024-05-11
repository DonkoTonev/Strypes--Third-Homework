#include <iostream>
using namespace std;

int logicalExpression1(int a, int b, int c) {
    return (a && !b && !c) || (!a && !b && c) || (!a && b && !c) || (a && b && c);
}

int logicalExpression0(int a, int b, int c) {
    return (!a && b && c) || (a && !b && c) || (a && b && !c) || (!a && !b && !c);
}

int minimizedExpression(int a, int b, int c) {
    return b || (a && c);
}

int main() {
    int a, b, c;
    cout << "Enter values for a, b, and c (0 or 1): ";
    cin >> a >> b >> c;

    int result1 = logicalExpression1(a, b, c);
    int result0 = logicalExpression0(a, b, c);
    int resultMinimized = minimizedExpression(a, b, c);

    cout << "F(a, b, c) using logical expression synthesized by '1': " << result1 << endl;
    cout << "F(a, b, c) using logical expression synthesized by '0': " << result0 << endl;
    cout << "F(a, b, c) using minimized logical expression: " << resultMinimized << endl;

    return 0;
}
