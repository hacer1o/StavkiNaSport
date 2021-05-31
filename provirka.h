#ifndef provirka_H
#define provirka_H_
int number1;
int number2;
int maximum(float n1, float n2, float n3, float n4, float n5, float n6, float n7, float n8, float n9, float n10, float n11, float n12, float n13, float n14, float n15, float n16, float n17, float n18, float n19, float n20) {
    if (n1 != 0) { number1 = n1; n1 = 0; }
    else if (n2 != 0) { number1 = n2; n2 = 0; }
    else if (n3 != 0) { number1 = n3; n3 = 0; }
    else if (n4 != 0) { number1 = n4; n4 = 0; }
    else if (n5 != 0) { number1 = n5; n5 = 0; }
    else if (n6 != 0) { number1 = n6; n6 = 0; }
    else if (n7 != 0) { number1 = n7; n7 = 0; }
    else if (n8 != 0) { number1 = n8; n8 = 0; }
    else if (n9 != 0) { number1 = n9; n9 = 0; }
    else if (n10 != 0) { number1 = n10; n10 = 0; }
    else if (n11 != 0) { number1 = n11; n11 = 0; }
    else if (n12 != 0) { number1 = n12; n12 = 0; }
    else if (n13 != 0) { number1 = n13; n13 = 0; }
    else if (n14 != 0) { number1 = n14; n14 = 0; }
    else if (n15 != 0) { number1 = n15; n15 = 0; }
    else if (n16 != 0) { number1 = n16; n16 = 0; }
    else if (n17 != 0) { number1 = n17; n17 = 0; }
    else if (n18 != 0) { number1 = n18; n18 = 0; }
    else if (n19 != 0) { number1 = n19; n19 = 0; }
    else if (n20 != 0) { number1 = n20; n20 = 0; }

    if (n1 != 0) { number2 = n1; n1 = 0; }
    else if (n2 != 0) { number2 = n2; n2 = 0; }
    else if (n3 != 0) { number2 = n3; n3 = 0; }
    else if (n4 != 0) { number2 = n4; n4 = 0; }
    else if (n5 != 0) { number2 = n5; n5 = 0; }
    else if (n6 != 0) { number2 = n6; n6 = 0; }
    else if (n7 != 0) { number2 = n7; n7 = 0; }
    else if (n8 != 0) { number2 = n8; n8 = 0; }
    else if (n9 != 0) { number2 = n9; n9 = 0; }
    else if (n10 != 0) { number2 = n10; n10 = 0; }
    else if (n11 != 0) { number2 = n11; n11 = 0; }
    else if (n12 != 0) { number2 = n12; n12 = 0; }
    else if (n13 != 0) { number2 = n13; n13 = 0; }
    else if (n14 != 0) { number2 = n14; n14 = 0; }
    else if (n15 != 0) { number2 = n15; n15 = 0; }
    else if (n16 != 0) { number2 = n16; n16 = 0; }
    else if (n17 != 0) { number2 = n17; n17 = 0; }
    else if (n18 != 0) { number2 = n18; n18 = 0; }
    else if (n19 != 0) { number2 = n19; n19 = 0; }
    else if (n20 != 0) { number2 = n20; n20 = 0; }

    if (number1 > number2) return number1;
    else return number2;
    /*
    if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5) && (n1 > n6) && (n1 > n7) && (n1 > n8) && (n1 > n9) && (n1 > n10) && (n1 > n11) && (n1 > n12) && (n1 > n13) && (n1 > n14)) {
        return 1;
    }
    else if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5) && (n2 > n6) && (n2 > n7) && (n2 > n8) && (n2 > n9) && (n2 > n10) && (n2 > n11) && (n2 > n12) && (n2 > n13) && (n2 > n14)) {
        return 2;
    }
    else if ((n3 > n1) && (n3 > n2) && (n3 > n4) && (n3 > n5) && (n3 > n6) && (n3 > n7) && (n3 > n8) && (n3 > n9) && (n3 > n10) && (n3 > n11) && (n3 > n12) && (n3 > n13) && (n3 > n14)) {
        return 3;
    }
     else if ((n4 > n1) && (n4 > n2) && (n4 > n3) && (n4 > n5) && (n4 > n6) && (n4 > n7) && (n4 > n8) && (n4 > n9) && (n4 > n10) && (n4 > n11) && (n4 > n12) && (n4 > n13) && (n4 > n14)) {
        return 4;
    }
    else if ((n5 > n1) && (n5 > n2) && (n5 > n3) && (n5 > n4) && (n5 > n6) && (n5 > n7) && (n5 > n8) && (n5 > n9) && (n5 > n10) && (n5 > n11) && (n5 > n12) && (n5 > n13) && (n5 > n14)) {
        return 5;
    }
    else if ((n6 > n1) && (n6 > n2) && (n6 > n3) && (n6 > n4) && (n6 > n5) && (n6 > n7) && (n6 > n8) && (n6 > n9) && (n6 > n10) && (n6 > n11) && (n6 > n12) && (n6 > n13) && (n6 > n14)) {
        return 6;
    }
    else if ((n7 > n1) && (n7 > n2) && (n7 > n3) && (n7 > n4) && (n7 > n5) && (n7 > n6) && (n7 > n8) && (n7 > n9) && (n7 > n10) && (n7 > n11) && (n7 > n12) && (n7 > n13) && (n7 > n14)) {
        return 7;
    }
    else if ((n8 > n1) && (n8 > n2) && (n8 > n3) && (n8 > n4) && (n8 > n5) && (n8 > n6) && (n8 > n7) && (n8 > n9) && (n8 > n10) && (n8 > n11) && (n8 > n12) && (n8 > n13) && (n8 > n14)) {
        return 8;
    }
    else if ((n9 > n1) && (n9 > n2) && (n9 > n3) && (n9 > n4) && (n9 > n5) && (n9 > n6) && (n9 > n7) && (n9 > n8) && (n9 > n10) && (n9 > n11) && (n9 > n12) && (n9 > n13) && (n9 > n14)) {
        return 9;
    }
    else if ((n10 > n1) && (n10 > n2) && (n10 > n3) && (n10 > n4) && (n10 > n5) && (n10 > n6) && (n10 > n7) && (n10 > n8) && (n10 > n9) && (n10 > n11) && (n10 > n12) && (n10 > n13) && (n10 > n14)) {
        return 10;
    }
    else if ((n11 > n1) && (n11 > n2) && (n11 > n3) && (n11 > n4) && (n11 > n5) && (n11 > n6) && (n11 > n7) && (n11 > n8) && (n11 > n9) && (n11 > n10) && (n11 > n12) && (n11 > n13) && (n11 > n14)) {
        return 11;
    }
    else if ((n12 > n1) && (n12 > n2) && (n12 > n3) && (n12 > n4) && (n12 > n5) && (n12 > n6) && (n12 > n7) && (n12 > n8) && (n12 > n9) && (n12 > n10) && (n12 > n11) && (n12 > n13) && (n12 > n14)) {
        return 12;
    }
    else if ((n13 > n1) && (n13 > n2) && (n13 > n3) && (n13 > n4) && (n13 > n5) && (n13 > n6) && (n13 > n7) && (n13 > n8) && (n13 > n9) && (n13 > n10) && (n13 > n11) && (n13 > n12) && (n13 > n14)) {
        return 13;
    }
    else if ((n14 > n1) && (n14 > n2) && (n14 > n3) && (n14 > n4) && (n14 > n5) && (n14 > n6) && (n14 > n7) && (n14 > n8) && (n14 > n9) && (n14 > n10) && (n14 > n12) && (n14 > n13)) {
        return 14;
    }
    */
    /*else if ((n1 == n2) || (n1 == n3) || (n1 == n4) || (n1 == n5) || (n1 == n6) || (n1 == n7) || (n1 == n8) || (n1 == n9) ||(n1 == n10) || (n1 == n11) || (n1 == n12) || (n1 == n13) || (n1 == n14) ||
        (n2 == n3) || (n2 == n4) ||(n2 == n5) || (n2 == n6) || (n2 == n7) || (n2 == n8) || (n2 == n9) || (n2 == n10) || (n2 == n11)|| (n2 == n12) || (n2 == n13) || (n2 == n14) ||
        (n3 == n4) || (n3 == n5) || (n3 == n6) || (n3 == n7) || (n3 == n8) || (n3 == n9) || (n3 == n10) || (n3 == n11) || (n3 == n12) || (n3 == n13) || (n3 == n14) ||
        (n4 == n5) || (n4 == n6) || (n4 == n7) || (n4 == n8) || (n4 == n9) || (n4 == n10) || (n4 == n11)|| (n4 == n12) || (n4 == n13) || (n4 == n14) ||
        (n5 == n6) || (n5 == n7) || (n5 == n8) || (n5 == n9) || (n5 == n10) || (n5 == n11) || (n5 == n12) || (n5 == n13) || (n5 == n14) ||
        (n6 == n7) || (n6 == n8) || (n6 == n9) || (n6 == n10) || (n6 == n11) || (n6 == n12) || (n6 == n13) || (n6 == n14) ||
        (n7 == n8) || (n7 == n9) || (n7 == n10) || (n7 == n11) || (n7 == n12) || (n7 == n13) || (n7 == n14) ||
        (n8 == n9) || (n8 == n10) || (n8 == n11) || (n8 == n12) || (n8 == n13) || (n8 == n14) ||
        (n9 == n10) || (n9 == n11) || (n9 == n12) || (n9 == n13) || (n9 == n14) ||
        (n10 == n11)|| (n10 == n12) || (n10 == n13) || (n10 == n14) ||
        (n11 == n12)|| (n11 == n13) || (n11 == n14) ||
        (n12 == n13)|| (n12 == n14) ||
        (n13 == n14)
        ) {
        return 0;
    }*/
 }
#endif