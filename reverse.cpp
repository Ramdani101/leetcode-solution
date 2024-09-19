int reverse(int x) {
        int hasil = 0;
        while (x != 0) {
        int pop = x % 10;
        x /= 10;

        if (hasil > INT_MAX / 10 || (hasil == INT_MAX / 10 && pop > 7)) return 0;
        if (hasil < INT_MIN / 10 || (hasil == INT_MIN / 10 && pop < -8)) return 0;

        hasil = hasil * 10 + pop;
    }
    return hasil;
    }