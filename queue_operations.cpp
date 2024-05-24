#include <iostream>
#include <queue>

using namespace std;

void cetakQueue(queue<int> q)
{
    cout << "queue: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    const int kapasitas = 5;
    string pesanAwal = "mulai dengan queue kosong\n";
    cout << pesanAwal;

    if (q.size() < kapasitas)
    {
        q.push(3);
    }
    cout << "setelah enqueue(3): ";
    cetakQueue(q);

    if (q.size() < kapasitas)
    {
        q.push(7);
    }
    cout << "setelah enqueue(7): ";
    cetakQueue(q);

    if (!q.empty())
    {
        q.pop();
    }
    cout << "setelah dequeue(): ";
    cetakQueue(q);

    if (q.size() < kapasitas)
    {
        q.push(2);
    }
    cout << "setelah enqueue(2): ";
    cetakQueue(q);

    if (q.size() < kapasitas)
    {
        q.push(4);
    }
    cout << "setelah enqueue(4): ";
    cetakQueue(q);

    if (q.size() < kapasitas)
    {
        q.push(1);
    }
    cout << "setelah enqueue(1): ";
    cetakQueue(q);

    if (!q.empty())
    {
        q.pop();
    }
    cout << "setelah dequeue(): ";
    cetakQueue(q);

    if (q.size() < kapasitas)
    {
        q.push(6);
    }
    cout << "setelah enqueue(6): ";
    cetakQueue(q);

    if (!q.empty())
    {
        q.pop();
    }
    cout << "setelah dequeue(): ";
    cetakQueue(q);

    if (q.size() < kapasitas)
    {
        q.push(5);
    }
    cout << "setelah enqueue(5): ";
    cetakQueue(q);

    return 0;
}
