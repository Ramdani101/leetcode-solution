int generateKey(int num1, int num2, int num3) {
        string paddedNumber1 = to_string(num1);
        paddedNumber1 = string(4 - paddedNumber1.length(), '0') + paddedNumber1;
        string paddedNumber2 = to_string(num2);
        paddedNumber2 = string(4 - paddedNumber2.length(), '0') + paddedNumber2;
        string paddedNumber3 = to_string(num3);
        paddedNumber3 = string(4 - paddedNumber3.length(), '0') + paddedNumber3;
        
        int firstDigit = min({paddedNumber1[0] - '0',paddedNumber2[0] - '0',paddedNumber3[0] - '0' });
        int secondDigit = min({paddedNumber1[1] - '0',paddedNumber2[1] - '0',paddedNumber3[1] - '0' });
        int thirdDigit = min({paddedNumber1[2] - '0',paddedNumber2[2] - '0',paddedNumber3[2] - '0' });
        int forthDigit = min({paddedNumber1[3] - '0',paddedNumber2[3] - '0',paddedNumber3[3] - '0' });


        string hasilKunci = to_string(firstDigit) + to_string(secondDigit) + to_string(thirdDigit) + to_string(forthDigit);
        int result = stoi(hasilKunci);
    }