#include <string>
#include <vector>

using namespace std;

int solution(vector<int> cookie) {
    int answer = 0;
    int n = cookie.size();
    int rsum, lsum, ridx, lidx;
    
    for(int i = 0; i < n-1; i++)
    {
        rsum = cookie[i]; 
        lsum = cookie[i+1];
        ridx = i; lidx =i+1;
        while(1)
        {
            if(rsum == lsum && rsum >= answer) 
                answer = rsum;
            
            if(ridx > 0 && rsum <= lsum)
                rsum += cookie[--ridx];
            else if(lidx < n-1 && rsum >= lsum)
                lsum += cookie[++lidx];
            else break;
        }
    } 
    return answer;
}
