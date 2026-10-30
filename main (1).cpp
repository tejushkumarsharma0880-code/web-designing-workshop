#include <iostream>
using namespace std;

int main()
{
int age, countA = 0, countB = 0, countC = 0;
int n = 1;
char candidate;
while (n == 1)
{
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Vote for candidate (a, b, c): ";
        cin >> candidate;

        if (candidate == 'a')
            countA += 1;
        else if (candidate == 'b')
            countB+= 1;
        else if (candidate == 'c')
            countB++;
        else
            cout << "Invalid candidate!" << endl;
    }
    else
    {
        cout << "Not eligible to vote" << endl;
    }

    cout << "To continue, enter 1; to stop, enter 0: ";
    cin >> n;
}

cout << "Votes for candidate A = " << countA << endl;
cout << "Votes for candidate B = " << countB << endl;
cout << "Votes for candidate C = " << countC << endl;

return 0;

}
