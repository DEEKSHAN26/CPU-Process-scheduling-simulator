#include <stdio.h>
#define MAX 20

int queue[MAX];
int front = 0, rear = -1;

void enqueue(int p) {
    if (rear == MAX - 1) {
        printf("Queue is full!\n");
        return;
    }
    queue[++rear] = p;
}

int dequeue() {
    if (front > rear)
        return -1;
    return queue[front++];
}

int main() {
    int n, i, p;
    int bt[MAX], wt[MAX], tat[MAX];
    int time = 0;
    float totalWT = 0, totalTAT = 0;

    printf("CPU Scheduling Simulator\n");
    printf("Enter number of processes: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        printf("Invalid process count!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter burst time of P%d: ", i + 1);
        if (scanf("%d", &bt[i]) != 1 || bt[i] <= 0) {
            printf("Invalid burst time!\n");
            return 1;
        }
        enqueue(i);
    }

    printf("\nProcess\tBT\tWT\tTAT\n");

    while ((p = dequeue()) != -1) {
        wt[p] = time;
        time += bt[p];
        tat[p] = time;

        totalWT += wt[p];
        totalTAT += tat[p];

        printf("P%d\t%d\t%d\t%d\n",
               p + 1, bt[p], wt[p], tat[p]);
    }

    printf("\nAverage Waiting Time: %.2f\n", totalWT / n);
    printf("Average Turnaround Time: %.2f\n", totalTAT / n);

    return 0;
}
