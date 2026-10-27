CPU Process Scheduling Simulator Using Queue

1. Introduction

The CPU Process Scheduling Simulator is a mini-project developed using C programming and the Queue data structure. It demonstrates how processes are scheduled and executed using the First Come First Serve (FCFS) scheduling algorithm.

2. Problem Statement

To design and implement a CPU scheduling simulator using a Queue data structure that executes processes in their arrival order and calculates waiting time and turnaround time.

3. Objectives

- Understand the Queue data structure.
- Implement enqueue and dequeue operations.
- Simulate FCFS CPU scheduling.
- Calculate waiting time and turnaround time.
- Display a Gantt Chart.
- Calculate average waiting time and turnaround time.

4. Technologies Used

- Programming Language: C
- Data Structure: Queue
- Algorithm: First Come First Serve (FCFS)
- Compiler: OnlineGDB
- Version Control: GitHub

5. Working Principle

The simulator follows the FIFO (First In, First Out) principle.

1. The user enters the number of processes.
2. The user enters the burst time of each process.
3. Processes are inserted into the queue.
4. Processes are removed and executed in FIFO order.
5. Waiting time and turnaround time are calculated.
6. The results and Gantt Chart are displayed.

All processes are assumed to arrive at time zero.

6. Formulas

- Waiting Time = Time before a process begins execution
- Turnaround Time = Completion Time − Arrival Time
- Average Waiting Time = Total Waiting Time / Number of Processes
- Average Turnaround Time = Total Turnaround Time / Number of Processes

7. Sample Input

Number of processes: 3

Process| Burst Time
P1| 5
P2| 3
P3| 2

8. Sample Output

Process| Burst Time| Waiting Time| Turnaround Time
P1| 5| 0| 5
P2| 3| 5| 8
P3| 2| 8| 10

Average Waiting Time: 4.33

Average Turnaround Time: 7.67

Gantt Chart:

| P1 | P2 | P3 |
0    5    8    10

9. How to Run

1. Open OnlineGDB C Compiler.
2. Copy the code from "cpu_scheduling.c".
3. Paste it into the compiler.
4. Click Run.
5. Enter the number of processes and burst times.
6. View the scheduling results.

10. Conclusion

The CPU Process Scheduling Simulator demonstrates the application of the Queue data structure in FCFS scheduling. It helps users understand process execution order, waiting time, turnaround time, and CPU scheduling fundamentals.
