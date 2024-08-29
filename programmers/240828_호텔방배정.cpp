#include <string>
#include <vector>
#include <map>
using namespace std;

map<long long, long long> r;

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
