string addBinary(string a, string b) {
        string result ="";
        int penampung = 0;
        int besaranSementaraSatu = a.size() - 1;
        int besaranSementaraDua = b.size() - 1;

        while (besaranSementaraSatu >= 0 || besaranSementaraDua >= 0 || penampung == 1 )
        {
            penampung += (besaranSementaraSatu >=0) ? a[besaranSementaraSatu--] - '0': 0; 
            //Jika besaranSementaraSatu nilainya masih >= 0 maka tambahkan ke penampung indeks a
            //ke besaranSementaraSatu kemudian dikurang
            penampung += (besaranSementaraDua >=0) ? b[besaranSementaraDua--] - '0': 0;

            result.insert(0, 1, (penampung % 2) + '0');
            penampung /= 2;
        }
        
        return result;
        


        // OUT OF RANGE 
        // int angkaPertama = stoi(a,0,2);
        // int angkaKedua = stoi(b,0,2);
        // string result = "";

        // int jumlahDesimal = angkaPertama + angkaKedua;
        // if (jumlahDesimal == 0)
        // {
        //     result = "0";
        // }else{
        
        // while (jumlahDesimal > 0)
        // {
        //     if (jumlahDesimal % 2 == 0)
        //     {
        //         result.insert(0,"0");
        //     }else{
        //         result.insert(0,"1");
        //     }
        //     jumlahDesimal /= 2;
            
        // }
        // }
        // return result;


       