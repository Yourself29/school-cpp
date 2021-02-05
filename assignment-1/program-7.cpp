# include <iostream>
# include <stdlib.h>

using namespace std;

int main(void)
{

system("CLEAR");

for (int i = 100; i > 0; i--) {
    if ((i%2) == 0)
        cout << i << '\n';
}

return 0;
}
