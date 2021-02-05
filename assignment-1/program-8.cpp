# include <iostream>
# include <stdlib.h>

using namespace std;

int main(void)
{

system("CLEAR");

for (int i = 8; i <= 50; i++) {
    if ((i%8) == 0)
        cout << i << '\n';
}

return 0;
}
