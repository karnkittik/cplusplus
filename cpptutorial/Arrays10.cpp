#include <iostream>
#define WIDTH 5
#define HEIGHT 3
using namespace std;
void procedure(int arg[], int length)
{
    for (int n = 0; n < length; ++n)
        cout << arg[n] << " . ";
}
int main()
{
    //stored in contiguous memory locations
    int foo[5] = {16, 2, 77};
    cout << foo[2] << endl; //foo[3] initialized with zero
    foo[0] = 5; foo[-2] = 6;
    cout << foo[0] << "kk"<<foo[-2]<<endl; //5
    int o, result = 0;
    for (o = 0; o < 5; ++o)
    {
        result += foo[o];
    }
    cout << result << endl;
    int jimmy[HEIGHT][WIDTH];
    //int jimmy[3][5]; //eual to jimmy[3*5]
    int n, m;
    for (n = 0; n < HEIGHT; n++)
    {

        for (m = 0; m < WIDTH; m++)
        {
            jimmy[n][m] = (n + 1) * (m + 1);
        }
    }
    procedure(foo, 5);
    /*container library array
    to use .size()
    #include <iostream>
#include <array>
using namespace std;

int main()
{
  array<int,3> myarray {10,20,30};

  for (int i=0; i<myarray.size(); ++i)
    ++myarray[i];

  for (int elem : myarray)
    cout << elem << '\n';
}*/
    return 0;
}
