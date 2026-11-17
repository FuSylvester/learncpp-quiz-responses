/*
Question #1

What type of conversion happens in each of the following cases? Valid answers are: No conversion needed, numeric promotion, numeric conversion, won’t compile due to narrowing conversion. Assume int and long are both 4 bytes.

int main()
{
    int a { 5 }; // 1a
    int b { 'a' }; // 1b
    int c { 5.4 }; // 1c
    int d { true }; // 1d
    int e { static_cast<int>(5.4) }; // 1e

    double f { 5.0f }; // 1f
    double g { 5 }; // 1g

    // Extra credit section
    long h { 5 }; // 1h

    float i { f }; // 1i (uses previously defined variable f)
    float j { 5.0 }; // 1j

}

*/

/*
My Solution:

1a = no conversion needed
1b = numeric conversion
1c = won't compile
1d = numeric conversion
1e = no conversion needed
1f = won't compile
1g = numeric promotion
1h = numeric promotion
1i = won't compile

*/

/*
 Answers:

1a = correct
1b = numeric promotion of char to int
1c = correct
1d = numeric promotion of bool to int
1e = numeric conversion of double 5.4 to int
1f = numeric promotion of float to double
1g = numeric conversion of int to double
1h = numeric conversion of int to long
1i = will not compile

*/