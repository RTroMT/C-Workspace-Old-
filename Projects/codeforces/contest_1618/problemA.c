// https://codeforces.com/contest/1618/problem/A

// Input:
/*
5
1 3 4 4 5 7 8
1 2 3 4 5 6 7
300000000 300000000 300000000 600000000 600000000 600000000 900000000
1 1 2 999999998 999999999 999999999 1000000000
1 2 2 3 3 4 5
*/
// Expected output:
/*
1 4 3
4 1 2
300000000 300000000 300000000
999999998 1 1
1 2 2
*/

/* a1, a2, a3 is three numbers that u need to find.
- The largest number will be the sum of a1; a2; a3 (because a1; a2; a3 are all positive integers) [a1 + a2 + a3 = largest]
- From input, create a for_loop to check every single number from big--->small :
+ Check if the number is the sum of (a1;a2)||(a2;a3)||(a1;13); if there're many answer, pick one.
+
*/