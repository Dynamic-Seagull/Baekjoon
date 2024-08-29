//try 1 : 86 -----------------------------------------------------------------
//try 3 : 100 - map -> unordered_map

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> r;

long long check(long long num)
    {
        if(r[num] == 0) return num;
        else return r[num] =check(r[num]);
    }

vector<long long> solution(long long k, vector<long long> room_number) {
    vector<long long> answer;
    
    for(int i = 0; i < room_number.size(); i++)
    {
        long long  num = check(room_number[i]);
        answer.push_back(num);
        r[num] = num + 1;
    }
    return answer;
}

/*try 2 : 87 -----------------------------------------------------------------

#include <string>
#include <vector>
#include <map>
using namespace std;

map<long long, long long> r;

long long check(long long num)
{
    long long rn = num;
    vector<long long> f;
    
    while (r[rn])
    {
        f.push_back(rn);
        rn = r[rn];
    }
    
    for(int i = 0; i < f.size(); i++)
        r[f[i]] = rn + 1;
    
    return rn;
        
}

vector<long long> solution(long long k, vector<long long> room_number) {
    vector<long long> answer;
    
    for(int i = 0; i < room_number.size(); i++)
    {
        long long  num = room_number[i];
        long long rst = check(num);
        answer.push_back(rst);
        r[rst] = rst + 1;
    }
    return answer;
}*/


