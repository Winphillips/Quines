#include <iostream>
using namespace std;

int main() {
    char* program = "#include <iostream>%cusing namespace std;%c%cint main() {%c    char* program = %c%s%c;%c    printf(program, 10, 10, 10, 10, 34, program, 34, 10, 10);%c    return 0;%c}%c";
    printf(program, 10, 10, 9, 10, 34, program, 34, 10, 10, 10);
    return 0;
}
