#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Function to generate assembly-like instructions
vector<string> generateInstructions(int a, int b, char op) {
    vector<string> instructions;

    instructions.push_back("LOAD " + to_string(a));
    instructions.push_back("LOAD " + to_string(b));

    if (op == '+')
        instructions.push_back("ADD");
    else if (op == '-')
        instructions.push_back("SUB");
    else if (op == '*')
        instructions.push_back("MUL");
    else if (op == '/')
        instructions.push_back("DIV");

    instructions.push_back("STORE RESULT");

    return instructions;
}

// Function for constant folding
int constantFold(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;

    return 0;
}

int main() {
    int a, b;
    char op;

    cout << "Enter expression (example: 2 + 3): ";
    cin >> a >> op >> b;

    // constant folding optimization
    int result = constantFold(a, b, op);

    cout << "\nConstant Folding Result: " << result << endl;

    // generate assembly-like instructions
    vector<string> code = generateInstructions(a, b, op);

    cout << "\nGenerated Instructions:\n";

    for (string line : code) {
        cout << line << endl;
    }

    return 0;
}
