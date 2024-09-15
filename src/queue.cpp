#include <queue>
using namespace std;
void operator_queue()
{
    queue<int> queue;

    queue.push(1);
    queue.push(3);
    queue.push(2);
    queue.push(5);
    queue.push(4);
    queue.pop();
    int size = queue.size();
    bool empty =  queue.empty();
}