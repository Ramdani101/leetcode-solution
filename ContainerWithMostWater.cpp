#include <iostream>
#include <algorithm>


    long long int maxArea(vector<long long int>& height) {
        //this is my own solution, has time complexity O(n^2)
        int result = 0;
        if (height.size() == 2)
        {
            result = height[0] * height[1];
        }else{
            int bigest = 0;
            for (int i = 0; i < height.size(); i++)
            {
                for (int j = 1; j < height.size(); j++)
                {
                    int area = j - i;
                    int smallestHeight = min(height[j],height[i]);
                    int dump = area*smallestHeight;
                    if (dump > bigest)
                    {
                        bigest = dump;
                    }else{
                        bigest = bigest;
                    }
                    
                }
                
            }
            result = bigest;
        }
        
        return result;
        
       // and this chat gpt solution with time complexity O(n)
       int result = 0;
       int left = 0;
       int right = height.size()-1;
       while (left < height)
       {
         int area = (right - left) * min(height[left],height[right]);
         result = max(area,result);
         if (height[left] < height[right])
         {
            left++;
         }else{
            right--;
         }
       }
       return result;

        
    }