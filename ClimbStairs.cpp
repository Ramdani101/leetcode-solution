int climbStairs(int n) {  
    if (n <= 2) return n; 
    
    int pertama = 1, kedua = 2;  
    for (int i = 3; i <= n; ++i) {  
        int ketiga = pertama + kedua ;  
        pertama = kedua;  
        kedua = ketiga;  
    }
    return kedua; 
}