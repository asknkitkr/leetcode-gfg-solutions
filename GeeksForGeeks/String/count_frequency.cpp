/* program to count frequencies of each character of a string in sorted manner */
#include <iostream>
using namespace std;

int main()
{
    string example = "pneumonoultramicroscopicsilicovolcanoconiosis"; // take any string as an example;
    int count[26] = {0};                                              // assign an array of 26 elements or 26 alphabets;

    // traverse through the string from index 0 to the length of the string
    for (int i = 0; i < example.length(); i++)
    {
        // count each character and store the count in the count array
        count[example[i] - 'a']++;
    }
    // this loop will print the output in sorted format, since there are 26 alphabets
    for (int i = 0; i < 26; i++)
    {
        // from the count table any character's count greater than zero then it will print the count
        if (count[i] > 0)
        {
            cout << (char)(i + 'a') << " " << count[i] << endl;
            // output for the above example:
            /*
            a 2
            c 6
            e 1
            i 6
            l 3
            m 2
            n 4
            o 9
            p 2
            r 2
            s 4
            t 1
            u 2
            v 1
            */
        }
    }
}