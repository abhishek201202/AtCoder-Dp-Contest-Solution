// You are given two strings A and B each consisting of digits 
// 1 and 2 only. A string is considered good if you can 
// start at index 0 and reach index n-1, visiting each 
// index exactly once and ending at the last index. At each 
// index you can move 1 or 2 steps to the right or left 
// depending on whether the digit is 1 or 2. Our aim is to 
// make both the strings A and B good by choosing some 
// subset S of indices and swapping at each index between 
// A and B. You have to find how many such subsets exist.





A ==> 1211
B ==> 1111

ith index of string a 
jth index of string b

(i) -> i - a[i] or i + a[i]


index  01234
good string ==> 12211

  0 -> 1
  1 -> 3
  2 -> 4, 0
  3 -> 4, 2
 // 122211112222
 // 12211221
 // 122211221
 // 1122211
 // 11211
 // 11122
 
 // 1122122 NP
 // 22111 P  
 // 11221 NP
 // 112211 P
 
 // 111221112211122111221111
 
 
 A -> 11211
 B -> 12111
 
 
 (i, 1) 
 (i, 2)
 
 (i, j) => (1, 1), (1, 2), (2, 1), (2, 2)
 
 
 (i, 1, 1,  1, 1)
 (i, 1, 1,  2, 1)
 (i, 2, 1,  1, 1)
 
 (1, 2, 1) 
 
 (i, 1, 2)
 (i, 2, 2)
 
 
 dp[i][0] = total no of ways such that, ith index of string a and b are (1, 1)
 dp[i][1] = (1, 2)
 dp[i][2] = (2, 1) 
 dp[i][3] = (2, 2)
 
 12
 12
 
 22
 22
 
 (1, 1)
 dp[j][0] += dp[j - 1][0]
 
 
 12
 22
 
 1, 1
 dp(i, 0, 0) = dp(i - 1, 0, 0) + dp(i - 1, 2, 0) + dp(i - 1, 0, 2) + dp(i - 1, 2, 2)
 
 1, 2
 dp(i, 0, 1) = dp(i - 1, 0, 0) + dp(i - 1, 1, 0) + dp(i - 1, 2, 0) 
 dp(i, 0, 2) = dp(i - 1, 0, 1) + dp(i - 1, 1, 1) + dp(i - 1, 2, 1) 
 
 
 2, 1
 dp(i, 1, 0) = dp(i - 1, 0, 0) + dp(i - 1, 0, 2) 
 dp(i, 2, 0) = dp(i - 1, 1, 0) + dp(i - 1, 1, 2)
 
 2, 2
 dp(i, 1, 1) = dp(i - 1, 0, 0)
 dp(i, 1, 2) = dp(i - 1, 0, 1)
 dp(i, 2, 1) = dp(i - 1, 1, 0)
 dp(i, 2, 2) = dp(i - 1, 1, 1)
 
 
 
(i, j, k1, k2)

(i, j, k1 - 1, k2 - 1)


dp(i, k1, k2)

//////////////////////////////////////////////
vector<pair<int, int>> idx(int val){
    if(val == 1){
        return { {0,0}, {2, 0}};
    }else{
        Return {{0, 1}, {1, 2}};
    }
}
if(!(s[n - 1] == s[n - 2] == s2[n - 1] == s2[n - 2] == 1)){
    Not possible
}


if(s[0] == 1 && s2[0] == 1){
    Dp[0][0][0] = 1
}else if(s[0] == 1 && s2[0] == 2){
    Dp[0][1] = 1;
}else if(s[0] == 2 && s2[0] == 1){
    Dp[1][0] = 1;
}else if(s[0] == 2 && s2[0] == 2){
    Dp[1][1] = 1;
}
for(int i = 1; i <= n - 2; i++){
vector<pair<int, int>> dx = idx(s1[i]);
vector<pair<int, int>> dy = idx(s2[i]);
for(auto [k1_prev, k1_next] : dx){
    for(auto [k2_prev, k2_next] : dy){
        Dp[i][k1_next][k2_next] += dp[i - 1][k1_prev]k2_prev];
Dp[i][k2_next][k1_next] += dp[i - 1][k2_prev]k1_prev];
}
}
}

// A => ____11
// B => ____11

Int res = dp[n - 2][0][0] * 4;
Cout << res << endl;

/////////////////////////////////END////////////////////
        for(int k2 = 0; k2 < 3; k2++){
            if(k1 - 1 >= 0 && k2 - 1 >= 0)
                dp[i][k1][k2] = dp[i - 1][k1 - 1][k2 - 1] //00 02 20 22
}
}
}else if(s[i] == 1 && s


 
 
 dp(i, 0, 1)
 dp(i, 1, 0)
 dp(i, 
 dp(i, 1)
 dp(i, 2)
 
// A = 111121
// B = 122111
 
 
 

