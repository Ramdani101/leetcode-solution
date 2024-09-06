long long mySqrt(long long x) {
        long long result;
        if(x == 0){
            return 0;
        }else{
        for (long long i = 0; i < LONG_MAX; i++)
        {
            long long percobaanPerhitungan = i*i;
            if (percobaanPerhitungan > x)
            {
                result += i-1;
            }
            
            if (percobaanPerhitungan == x)
            {
                result += i;
            }
            
            if (percobaanPerhitungan < x)
            {
                /* code */
            }
            
            if (result != 0)
            {
                break;
            }
        }
           
        }

         return result; 
        
    }